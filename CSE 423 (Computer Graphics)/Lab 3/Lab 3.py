from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *
import math


def draw_points(x, y):
    glPointSize(2) #pixel size. by default 1 thake
    glBegin(GL_POINTS)
    glVertex2f(x,y) #jekhane show korbe pixel
    glEnd()

def midpoint_circle_algo(X, Y, r):
    d = 1 - r
    x = 0
    y = r
    while x <= y:
        x += 1
        if d < 0:
            d += 2 * x + 1
        else:
            y -= 1
            d += 2 * (x - y) + 1
        draw_points(X + x, Y + y)
        draw_points(X - x, Y + y)
        draw_points(X + x, Y - y)
        draw_points(X - x, Y - y)
        draw_points(X + y, Y + x)
        draw_points(X - y, Y + x)
        draw_points(X + y, Y - x)
        draw_points(X - y, Y - x)

def drawCircle(X, Y, R):
    value = R / (2 * math.sqrt(2))
    midpoint_circle_algo(X, Y, R)
    midpoint_circle_algo(X + R / 2, Y, R / 2)
    midpoint_circle_algo(X - R / 2, Y, R / 2)
    midpoint_circle_algo(X, Y + R / 2, R / 2)
    midpoint_circle_algo(X, Y - R / 2, R / 2)
    midpoint_circle_algo(X + value, Y + value, R/2)
    midpoint_circle_algo(X - value, Y + value, R/2)
    midpoint_circle_algo(X + value, Y + value, R/2)
    midpoint_circle_algo(X - value, Y - value, R/2)

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
    glColor3f(1.0, 1.0, 0.0) #konokichur color set (RGB)

    drawCircle(250, 250, 150)
    draw_points(250, 250)
    glutSwapBuffers()


glutInit()
glutInitDisplayMode(GLUT_RGBA)
glutInitWindowSize(500, 500) #window size
glutInitWindowPosition(0, 0)
wind = glutCreateWindow(b"20301099_CSE423_Lab3") #window name
glutDisplayFunc(showScreen)

glutMainLoop()