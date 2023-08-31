#Task-1
#....................
from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *
import random
#.............................

x = random.sample(range(1, 301), 50)
y = random.sample(range(1, 301), 50)


def draw_points():
    glPointSize(5) #pixel size. by default 1 thake
    glBegin(GL_POINTS)
    for i in range(50):
        glVertex2f(x[i], y[i]) #jekhane show korbe pixel
    glEnd()

def iterate():
    glViewport(0, 0, 600, 600)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    glOrtho(0.0, 500, 0.0, 500, 0.0, 1.0)
    glMatrixMode (GL_MODELVIEW)
    glLoadIdentity()

def showScreen():
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glLoadIdentity()
    iterate()
    glColor3f(1.0, 1.0, 0.0) #konokichur color set (RGB)
    #call the draw methods here
    draw_points()
    glutSwapBuffers()


glutInit()
glutInitDisplayMode(GLUT_RGBA)
glutInitWindowSize(500, 500) #window size
glutInitWindowPosition(0, 0)
wind = glutCreateWindow(b"CSE423_Lab1_20301099") #window name
glutDisplayFunc(showScreen)
glutMainLoop()


#Task-2
#....................
from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *

def draw_lines():
    glLineWidth(3)
    glEnable(GL_LINE_SMOOTH)
    glBegin(GL_LINES)

    #roof_design
    glColor3f(128, 0, 0)

    glVertex2f(100, 400)  # roof_left point
    glVertex2f(200, 500)  #roof_top point

    glVertex2f(100, 400)  # roof_left_point
    glVertex2f(300, 400)  # roof_right_point

    glVertex2f(300, 400)  #roof_right point
    glVertex2f(200, 500)  #roof_top point

    #Body_design
    glColor3f(1, 1, 0)
    glVertex2f(100, 400)  #roof_left_point
    glVertex2f(100, 200)  #ghorer_left_kona

    glVertex2f(100, 200)  #ghorer_left_kona
    glVertex2f(300, 200)  #ghorer_dan_kona

    glVertex2f(300, 200)  # ghorer_dan_kona
    glVertex2f(300, 400)  #roof_right_point

    #left_window
    glColor3f(0, 0, 1)
    #left_handle
    glVertex2f(130, 370)
    glVertex2f(130, 330)
    #down_handle
    glVertex2f(130, 330)
    glVertex2f(170, 330)
    #right_handle
    glVertex2f(170, 330)
    glVertex2f(170, 370)
    #up_handle
    glVertex2f(170, 370)
    glVertex2f(130, 370)

    #right_window
    #left_handle
    glVertex2f(230, 370)
    glVertex2f(230, 330)
    #down_handle
    glVertex2f(230, 330)
    glVertex2f(270, 330)
    #right_handle
    glVertex2f(270, 330)
    glVertex2f(270, 370)
    #up_handle
    glVertex2f(270, 370)
    glVertex2f(230, 370)

    #door
    glColor3f(119, 82, 11)
    #left_handle
    glVertex2f(170, 200)
    glVertex2f(170, 300)

    #down_handle
    #glVertex2f(170, 200)
    #glVertex2f(240, 200)
    #right_handle

    glVertex2f(240, 200)
    glVertex2f(240, 300)
    #up_handle
    glVertex2f(240, 300)
    glVertex2f(170, 300)
    glEnd()

    #doorlock
    glPointSize(10)
    glEnable(GL_POINT_SMOOTH)
    glBegin(GL_POINTS)

    glColor3f(1, 0, 1)
    glVertex2f(230.0, 270.0)
    glEnd()

def iterate():
    glViewport(0, 0, 500, 500)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    glOrtho(0.0, 500, 0.0, 500, 0.0, 1.0)
    glMatrixMode (GL_MODELVIEW)
    glLoadIdentity()

def showScreen():
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glLoadIdentity()
    iterate()
    glColor3f(0.0, 5.0, 3.0) #konokichur color set (RGB)
    #call the draw methods here
    draw_lines()
    glutSwapBuffers()

glutInit()
glutInitDisplayMode(GLUT_RGBA)
glutInitWindowSize(500, 600) #window size
glutInitWindowPosition(0, 0)
wind = glutCreateWindow(b"CSE423_Lab1_20301099") #window name
glutDisplayFunc(showScreen)
glutMainLoop()


#Task-3
#....................
from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *

def draw_lines():
    glLineWidth(3)
    glEnable(GL_LINE_SMOOTH)
    glBegin(GL_LINES)

#......2......
    glColor3f(1.0, 0.0, 0.0)    #Red
    #Horizontal
    glVertex2f(100, 100)
    glVertex2f(150, 100)

    glVertex2f(100, 200)
    glVertex2f(150, 200)

    glVertex2f(100, 300)
    glVertex2f(150, 300)
    #Vertical
    glVertex2f(150, 300)
    glVertex2f(150, 200)

    glVertex2f(100, 200)
    glVertex2f(100, 100)


#......0......
    glColor3f(0.0, 1.0, 0.0)  #Green
    #Horizontal
    glVertex2f(200, 100)
    glVertex2f(250, 100)

    glVertex2f(250, 300)
    glVertex2f(200, 300)
    #Vertical
    glVertex2f(250, 300)
    glVertex2f(250, 100)

    glVertex2f(200, 100)
    glVertex2f(200, 300)

#......3......
    glColor3f(0.0, 0.0, 1.0) #Blue
    #Horizontal
    glVertex2f(300, 100)
    glVertex2f(350, 100)

    glVertex2f(300, 200)
    glVertex2f(350, 200)

    glVertex2f(300, 300)
    glVertex2f(350, 300)
    #Vertical
    glVertex2f(350, 300)
    glVertex2f(350, 200)

    glVertex2f(350, 200)
    glVertex2f(350, 100)

#......0......
    glColor3f(1.0, 1.0, 0.0)
    #Horizontal
    glVertex2f(400, 100)
    glVertex2f(450, 100)

    glVertex2f(400, 300)
    glVertex2f(450, 300)
    #Vertical
    glVertex2f(450, 300)
    glVertex2f(450, 100)

    glVertex2f(400, 100)
    glVertex2f(400, 300)

#......1......
    glColor3f(1.0, 0.0, 1.0)

    glVertex2f(500, 100)
    glVertex2f(500, 300)

    glVertex2f(500, 300)
    glVertex2f(485, 285)

    glVertex2f(490, 100)
    glVertex2f(510, 100)

# ......0......
    glColor3f(0.0, 1.0, 1.0)
    # Horizontal
    glVertex2f(550, 100)
    glVertex2f(600, 100)

    glVertex2f(550, 300)
    glVertex2f(600, 300)
    # Vertical
    glVertex2f(550, 300)
    glVertex2f(550, 100)

    glVertex2f(600, 100)
    glVertex2f(600, 300)

#......9......
    glColor3f(1.0, 1.0, 1.0)
    # Horizontal
    glVertex2f(650, 100)
    glVertex2f(700, 100)

    glVertex2f(650, 200)
    glVertex2f(700, 200)

    glVertex2f(650, 300)
    glVertex2f(700, 300)
    # Vertical
    glVertex2f(700, 300)
    glVertex2f(700, 100)

    glVertex2f(650, 300)
    glVertex2f(650, 200)

# ......9......
    glColor3f(232/255, 145/255, 202/255)
    # Horizontal
    glVertex2f(750, 100)
    glVertex2f(800, 100)

    glVertex2f(750, 200)
    glVertex2f(800, 200)

    glVertex2f(750, 300)
    glVertex2f(800, 300)
    #Vertical
    glVertex2f(800, 300)
    glVertex2f(800, 100)

    glVertex2f(750, 300)
    glVertex2f(750, 200)
    glEnd()


def iterate():
    glViewport(0, 0, 900, 400)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    glOrtho(0.0, 900, 0.0, 400, 0.0, 1.0)
    glMatrixMode(GL_MODELVIEW)
    glLoadIdentity()


def showScreen():
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glLoadIdentity()
    iterate()
    glColor3f(0.0, 5.0, 3.0)
    # call the draw methods here
    draw_lines()
    glutSwapBuffers()

glutInit()
glutInitDisplayMode(GLUT_RGBA)
glutInitWindowSize(1000, 400)
glutInitWindowPosition(0, 0)
wind = glutCreateWindow(b"CSE423_Lab1_20301099") #window name
glutDisplayFunc(showScreen)
glutMainLoop()

