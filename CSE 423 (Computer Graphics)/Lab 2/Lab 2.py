from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *
user_input = input("Input your Student ID: ")

def draw_points(x, y):
    glPointSize(5) #pixel size. by default 1 thake
    glBegin(GL_POINTS)
    glVertex2f(x, y) #jekhane show korbe pixel
    glEnd()

def zone_find(x1, y1, x2, y2):
    dx = (x2 - x1)
    dy = (y2 - y1)
    #for abs(dx) > abs(dy) it can be zone = 0, 3, 4, 7
    if abs(dx) > abs(dy):
        if dx >= 0 and dy >= 0:
            zone = 0
        elif dx <= 0 and dy >= 0:
            zone = 3
        elif dx <= 0 and dy <= 0:
            zone = 4
        elif dx >= 0 and dy <= 0:
            zone = 7
    else:
        if dx >= 0 and dy >= 0:
            zone = 1
        elif dx <= 0 and dy >= 0:
            zone = 2
        elif dx <= 0 and dy <= 0:
            zone = 5
        elif dx >= 0 and dy <= 0:
            zone = 6
    return zone

def zone_convert_to_zero(x, y, zone):
    if zone == 0:
        return x, y
    elif zone == 1:
        return y, x
    elif zone == 2:
        return -y, x
    elif zone == 3:
        return -x, y
    elif zone == 4:
        return -x, -y
    elif zone == 5:
        return -y, -x
    elif zone == 6:
        return y, -x
    elif zone == 7:
        return x, -y

def origin_convert(x, y, zone):
    if zone == 0:
        return x, y
    elif zone == 1:
        return y, x
    elif zone == 2:
        return -y, x
    elif zone == 3:
        return -x, y
    elif zone == 4:
        return -x, -y
    elif zone == 5:
        return -y, -x
    elif zone == 6:
        return y, -x
    elif zone == 7:
        return x, -y



def midpoint_line_algo(x1, y1, x2, y2, zone):
    dx = x2 - x1
    dy = y2 - y1
    d = (2 * dy) - dx
    d_north_east = 2 * dy - dx
    d_east = 2 * dy

    while(x1 < x2):
        x_convert, y_convert = origin_convert(x1, y1, zone)
        draw_points(x_convert, y_convert)
        if d < 0: #east
            x1 += 1
            d = d + d_east
        else:
            x1 += 1
            y1 += 1
            d = d + d_north_east

def draw_lines(x1, y1, x2, y2):
    zone_value = zone_find(x1, y1, x2, y2)
    x1_convert_zero, y1_convert_zero = zone_convert_to_zero(x1, y1, zone_value)
    x2_convert_zero, y2_convert_zero = zone_convert_to_zero(x2, y2, zone_value)
    midpoint_line_algo(x1_convert_zero, y1_convert_zero, x2_convert_zero, y2_convert_zero, zone_value)

def id_second_last(second_last):
    if second_last == "0":
        draw_lines(100, 150, 250, 150)
        draw_lines(250, 150, 250, 450)
        draw_lines(250, 450, 100, 450)
        draw_lines(100, 450, 100, 150)

    elif second_last == "1":
        draw_lines(250, 150, 250, 450)
        draw_lines(235, 150, 265, 150)
        draw_lines(235, 440, 250, 450)

    elif second_last == "2":
        draw_lines(100, 150, 250, 150)
        draw_lines(100, 150, 100, 300)
        draw_lines(100, 300, 250, 300)
        draw_lines(250, 300, 250, 450)
        draw_lines(250, 450, 100, 450)

    elif second_last == "3":
        draw_lines(250, 450, 100, 450)
        draw_lines(250, 450, 250, 300)
        draw_lines(100, 300, 250, 300)
        draw_lines(250, 300, 250, 150)
        draw_lines(250, 150, 100, 150)

    elif second_last == "4":
        draw_lines(100, 300, 250, 300)
        draw_lines(250, 300, 250, 450)
        draw_lines(100, 300, 100, 450)
        draw_lines(250, 300, 250, 150)

    elif second_last == "5":
        draw_lines(100, 450, 250, 450)
        draw_lines(100, 450, 100, 300)
        draw_lines(100, 300, 250, 300)
        draw_lines(250, 300, 250, 150)
        draw_lines(250, 150, 100, 150)

    elif second_last == "6":
        draw_lines(100, 150, 250, 150)
        draw_lines(100, 450, 100, 150)
        draw_lines(100, 450, 250, 450)
        draw_lines(250, 300, 250, 150)
        draw_lines(250, 300, 100, 300)

    elif second_last == "7":
        draw_lines(100, 450, 250, 450)
        draw_lines(250, 450, 185, 150)

    elif second_last == "8":
        draw_lines(100, 150, 250, 150)
        draw_lines(100, 450, 100, 150)
        draw_lines(100, 450, 250, 450)
        draw_lines(250, 450, 250, 150)
        draw_lines(100, 300, 250, 300)

    elif second_last == "9":
        draw_lines(100, 150, 250, 150)
        draw_lines(100, 450, 100, 300)
        draw_lines(100, 450, 250, 450)
        draw_lines(250, 450, 250, 150)
        draw_lines(100, 300, 250, 300)


def id_last(last):
    if last == "0":
        draw_lines(300, 150, 450, 150)
        draw_lines(450, 150, 450, 450)
        draw_lines(450, 450, 300, 450)
        draw_lines(300, 450, 300, 150)

    elif last == "1":
        draw_lines(330, 150, 330, 450)
        draw_lines(315, 150, 345, 150)
        draw_lines(315, 440, 330, 450)

    elif last == "2":
        draw_lines(300, 150, 450, 150)
        draw_lines(300, 150, 300, 300)
        draw_lines(300, 300, 450, 300)
        draw_lines(450, 300, 450, 450)
        draw_lines(450, 450, 300, 450)

    elif last == "3":
        draw_lines(300, 150, 450, 150)
        draw_lines(450, 150, 450, 450)
        draw_lines(300, 450, 450, 450)
        draw_lines(300, 300, 450, 300)


    elif last == "4":
        draw_lines(300, 300, 450, 300)
        draw_lines(450, 300, 450, 450)
        draw_lines(300, 300, 300, 450)
        draw_lines(450, 300, 450, 150)

    elif last == "5":
        draw_lines(100, 450, 250, 450)
        draw_lines(100, 450, 100, 300)
        draw_lines(100, 300, 250, 300)
        draw_lines(250, 300, 250, 150)
        draw_lines(250, 150, 100, 150)

    elif last == "6":
        draw_lines(300, 150, 450, 150)
        draw_lines(300, 450, 300, 150)
        draw_lines(300, 450, 450, 450)
        draw_lines(450, 300, 450, 150)
        draw_lines(300, 300, 450, 300)

    elif last == "7":
        draw_lines(300, 450, 450, 450)
        draw_lines(450, 450, 385, 150)

    elif last == "8":
        draw_lines(300, 150, 450, 150)
        draw_lines(450, 150, 450, 450)
        draw_lines(450, 450, 300, 450)
        draw_lines(300, 450, 300, 150)
        draw_lines(300, 300, 450, 300)

    elif last == "9":
        draw_lines(300, 150, 450, 150)
        draw_lines(450, 150, 450, 450)
        draw_lines(450, 450, 300, 450)
        draw_lines(300, 450, 300, 300)
        draw_lines(300, 300, 450, 300)

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
    glColor3f(1.0, 1.0, 1.0) #color set (RGB)
    #call the draw methods here
    #draw_points(250, 250)
    id_second_last(user_input[-2])
    id_last(user_input[-1])
    glutSwapBuffers()

glutInit()
glutInitDisplayMode(GLUT_RGBA)
glutInitWindowSize(600, 600) #window size
glutInitWindowPosition(0, 0)
wind = glutCreateWindow(b"Student ID: 20301099") #window name
glutDisplayFunc(showScreen)
glutMainLoop()