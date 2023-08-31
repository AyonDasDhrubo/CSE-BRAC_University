from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *
import random

# Define window dimensions and other constants
window_x = 1000
window_y = 800
GRID_SIZE = 20
speed = 100
GRID_WIDTH = window_x // GRID_SIZE
GRID_HEIGHT = (window_y - 20) // GRID_SIZE

# Define the SnakeGame class
class SnakeGame:
    def __init__(self):
        # Initialize starting position for the snake
        initial_x = GRID_WIDTH // 2
        initial_y = GRID_HEIGHT // 2

        # Initialize empty obstacles list
        self.obstacles = []

        # Define obstacle positions
        y1 = GRID_HEIGHT // 2 + 5
        y2 = GRID_HEIGHT // 2 - 5

        initial = 5
        end = GRID_WIDTH - 5

        # Create obstacle coordinates for the first line
        for x in range(initial, end + 1):
            obstacle = (x, y1)
            self.obstacles.append(obstacle)

        # Create obstacle coordinates for the second line
        for x in range(initial, end + 1):
            obstacle = (x, y2)
            self.obstacles.append(obstacle)

        # Initialize snake's starting position, direction, and other game variables
        self.snake = [(initial_x + 1, initial_y), (initial_x, initial_y), (initial_x - 1, initial_y)]
        self.direction = (1, 0)
        self.food = self.generate_food()
        self.score = 0
        self.load_high_score()  #initially loading highest score from the text file to compare
        self.highest = False

    # Method to generate new food coordinates
    def generate_food(self):
        while True:
            food = (random.randint(0, GRID_WIDTH - 1), random.randint(0, GRID_HEIGHT - 1))
            if food not in self.snake and food not in self.obstacles :
                return food

    # Method to draw the snake on the screen
    def draw_snake(self):
        glBegin(GL_QUADS)
        for x, y in self.snake:  #for every grid in snake assigning in the x and y
            x0, y0 = x * GRID_SIZE, y * GRID_SIZE  # taking our grids to original pixels
            x1, y1 = x0 + GRID_SIZE, y0 + GRID_SIZE # calculating other two points
            glColor3f(0.2, 0.2, 0.2)
            glVertex2f(x0, y0)
            glVertex2f(x0, y1)
            glVertex2f(x1, y1)
            glVertex2f(x1, y0)
        glEnd()

    # Method to draw the food on the screen
    def draw_food(self):
        glBegin(GL_QUADS)
        x, y = self.food
        x0, y0 = x * GRID_SIZE, y * GRID_SIZE
        x1, y1 = x0 + GRID_SIZE, y0 + GRID_SIZE
        glColor3f(1, 0, 0)
        glVertex2f(x0, y0)
        glVertex2f(x0, y1 )
        glVertex2f(x1, y1 )
        glVertex2f(x1, y0)
        glEnd()

    # Method to draw the obstacles on the screen
    def draw_obstacles(self):
        glBegin(GL_QUADS)
        for x, y in self.obstacles:
            x0, y0 = x * GRID_SIZE, y * GRID_SIZE
            x1, y1 = x0 + GRID_SIZE, y0 + GRID_SIZE
            glColor3f(1.0, 0.5, 0.5)
            glVertex2f(x0, y0)
            glVertex2f(x0, y1)
            glVertex2f(x1, y1)
            glVertex2f(x1, y0)
        glEnd()

    # Method to draw the game screen
    def draw(self):
        # Clear the screen and set background color
        glClearColor(0.2, 0.4, 0.3, 1.0)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
        glLoadIdentity()

        # Update game elements on the screen
        self.iterate()
        self.draw_obstacles()
        self.draw_score()
        self.draw_snake()
        self.draw_food()

        # Swap the buffers for double buffering
        glutSwapBuffers()

    # Method to handle keyboard input
    def keyboard(self, key, x, y):
        # Update snake direction based on keyboard input
        if (key == b'w' or key == b'W') and self.direction != (0, -1) :
            self.direction = (0, 1)
        elif (key == b's' or key == b'S') and self.direction != (0, 1) :
            self.direction = (0, -1)
        elif (key == b'a' or key == b'A') and self.direction != (1, 0) :
            self.direction = (-1, 0)
        elif (key == b'd' or key == b'D') and self.direction != (-1, 0) :
            self.direction = (1, 0)

    # Method to update the game state
    def update(self, val):
        head_x, head_y = self.snake[0]
        new_head_x = (head_x + self.direction[0]) % GRID_WIDTH #new_head_x + direction_x
        new_head_y = (head_y + self.direction[1]) % GRID_HEIGHT
        new_head = (new_head_x, new_head_y)

        if new_head == self.food:
            #updating snake position and food when snake eats food
            self.snake.insert(0, new_head)
            self.food = self.generate_food()
            self.score += 1

        else:
            if new_head in self.snake or new_head in self.obstacles :
                # Handle game over condition
                if self.score > self.highest_score:
                    self.highest_score = self.score
                    self.save_high_score()
                    self.highest = True
                self.game_over()
                return
            else:
                # Update snake position
                self.snake.insert(0, new_head)
                self.snake.pop()

        # Notify GLUT to redraw the window and set timer for game update
        glutPostRedisplay()
        glutTimerFunc(speed, self.update, 0)

    # Method to load the highest score from file
    def load_high_score(self):
        with open("high_score.txt", "r") as file:
            self.highest_score = int(file.read())  #we are loading the highest score from text file to game file
            return self.highest_score

    # Method to save the highest score to file
    def save_high_score(self):
        with open("high_score.txt", "w") as file:
            file.write(str(self.highest_score))  #if there is a new high score, we will save it

    # Method to draw the current score and highest score on the screen
    def draw_score(self):
        score_text = f"Score: {self.score}"
        highest_score_text = f"Highest Score: {self.highest_score}"

        # Set text color and position for current score
        glColor3f(1, 1, 1)
        glRasterPos2f(10, window_y - GRID_SIZE + 5)
        glutBitmapString(GLUT_BITMAP_HELVETICA_12, score_text.encode())

        # Set text color and position for highest score
        glRasterPos2f(window_x - 150, window_y - GRID_SIZE + 5)
        glutBitmapString(GLUT_BITMAP_HELVETICA_12, highest_score_text.encode())

    # Method to display game over screen
    def game_over(self):
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
        glLoadIdentity()

        # Display game over and highest score messages
        glColor3f(1, 0,.5)
        glRasterPos2f(window_x // 2 - 120, window_y // 2 + 20)
        if self.highest == True:
            glutBitmapString(GLUT_BITMAP_HELVETICA_18, b"Congratulations! New High Score\n")

        glRasterPos2f(window_x // 2 - 50, window_y // 2)
        glutBitmapString(GLUT_BITMAP_HELVETICA_18, b"Game Over\n")

        # Display player's score
        score_value = str(self.score)
        glRasterPos2f(window_x // 2 - 50, window_y // 2 - 20)
        glutBitmapString(GLUT_BITMAP_HELVETICA_18, b"Your Score: ")
        glutBitmapString(GLUT_BITMAP_HELVETICA_18, score_value.encode())
        glutSwapBuffers()

    # Method to set up the OpenGL viewport and matrices
    def iterate(self):
        glViewport(0, 0, window_x, window_y)
        glMatrixMode(GL_PROJECTION)
        glLoadIdentity()
        glOrtho(0.0, window_x, 0.0, window_y, 0.0, 1.0)
        glMatrixMode(GL_MODELVIEW)
        glLoadIdentity()

# Initialize GLUT and set up the game window
glutInit()
glutInitDisplayMode(GLUT_RGBA)
glutInitWindowSize(window_x, window_y)
glutInitWindowPosition(400, 100)
glutCreateWindow(b"Snake Game")
game = SnakeGame()

# Register callback functions for display, timer, and keyboard input
glutDisplayFunc(game.draw)
glutTimerFunc(100, game.update, 0)
glutKeyboardFunc(game.keyboard)

# Start the main loop of the game
glutMainLoop()



