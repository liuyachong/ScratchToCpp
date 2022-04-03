'''
程序：Turtle Plus 增强海龟绘图库
作者：苏秦@小海豚科学馆公众号
来源：图书《从Scratch到Python轻松学》
'''
import pyglet
from pyglet.gl import *
from math import sqrt, sin, cos, atan, radians, degrees
from random import randint

def rgbcolor(c):
    if type(c) is list or type(c) is tuple:
        return c if len(c) == 3 else c[0:3]
    elif not (c[0]=='#' and len(c)==7):
        colors = {'white':'#FFFFFF', 'black':'#000000', 'gray':'#BEBEBE',
                  'blue':'#0000FF', 'green':'#00FF00', 'yellow':'#FFFF00',
                  'brown':'#A52A2A', 'orange':'#FFA500', 'red':'#FF0000',
                  'pink':'#FFC0CB', 'purple':'#A020F0', 'cyan':'#00FFFF', }
        c = colors.get(c.lower(), '#000000')
    r, g, b = int(c[1:3], 16), int(c[3:5], 16), int(c[5:7], 16)
    return (r, g, b)

class SpritePen():
    '''Sprite画笔'''
    def __init__(self, width, height):
        self.win_width = width
        self.win_height = height
        self.rotation = 0
        self.dots = []
        self.is_down = True
        self.colorcode = '#000000'
        self.size = 1.0
        self.home()
        self.seth(90)
        
    def __draw_dot(self, x, y, c, s):
        try:
            glColor3ub(*rgbcolor(c))
        except Exception as e:
            print(*rgbcolor(c))
            print(e)
        glPointSize(s)
        glEnable(GL_POINT_SMOOTH)
        glHint(GL_POINT_SMOOTH_HINT, GL_NICEST)
        glEnable(GL_BLEND)
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)
        glBegin(GL_POINTS)
        glVertex2f(x, y)
        glEnd()

    def draw(self):
        '''绘制画笔的路径'''
        for (x, y, c, s) in self.dots:
            self.__draw_dot(x,y,c,s)
            
    def add_dot(self, x, y):
        self.dots.append((x, y, self.colorcode, self.size))

    def dot(self, size, color):
        self.dots.append((self.x, self.y, rgbcolor(color), size))
        
    def set_size(self, w, h):
        self.win_width = w
        self.win_height = h

    def clear(self):
        self.dots.clear()

    def reset(self):
        self.__init__(self.win_width, self.win_height)

    def down(self):
        self.is_down = True

    def up(self):
        self.is_down = False

    def seth(self, angle):
        self.rotation = angle - 90
        
    def heading(self):
        return self.rotation + 90
    
    def fd(self, d):
        self.move(d)

    def pencolor(self, c = None):
        if c == None:
            return self.colorcode
        else:
            self.colorcode = c

    def pensize(self, size):
        self.size = size
    
    def left(self, angle):
        '''左转一个角度'''
        self.rotation -= angle

    def right(self, angle):
        '''右转一个角度'''
        self.rotation += angle

    def setx(self, x):
        self.goto(x, self.y - self.win_height // 2)

    def sety(self, y):
        self.goto(self.x - self.win_width // 2, y)

    def xcor(self):
        return self.x - self.win_width // 2

    def ycor(self):
        return self.y - self.win_height // 2

    def position(self):
        return (self.x - self.win_width // 2, self.y - self.win_height // 2)

    def home(self):
        self.x = self.win_width // 2
        self.y = self.win_height // 2
        
    def goto(self, x, y):
        '''移动到某个坐标'''
        x = x + self.win_width // 2
        y = y + self.win_height // 2
        if self.is_down:
            rotation = self.rotation
            self.point(x, y)
            while not self.touching((x, y), 1):
                self.add_dot(self.x, self.y)
                self.move(1)
            self.rotation = rotation
        self.x = x
        self.y = y

    def move(self, distance):
        '''移动一个距离'''
        #生成一条路线的各个点
        if self.is_down:
            step = 1 if distance > 0 else -1
            stop = int(distance + step)
            for d in range(0, stop, step):
                x = self.x + d * sin(radians(self.rotation + 90))
                y = self.y + d * cos(radians(self.rotation + 90))
                self.add_dot(x, y)

        #将pyglet数学上的方位角转为测量学上的方位角，即+90
        self.x += distance * sin(radians(self.rotation + 90))
        self.y += distance * cos(radians(self.rotation + 90))
        
    def point(self, x, y):
        '''让角色面向指定的坐标'''
        #界限角，在坐标轴的角度
        if x == self.x:
            a = 0 if y > self.y else 180
        elif y == self.y:
            a = 90 if x > self.x else 270
        else:
            #象限角
            R = degrees(atan(abs(x - self.x) / abs(y - self.y)))
            #测量学方位角
            if x > self.x and y > self.y:
                a = R
            elif x > self.x and y < self.y:
                a = 180 - R
            elif x < self.x and y < self.y:
                a = 180 + R
            elif x < self.x and y > self.y:
                a = 360 - R

        #数学方位角
        self.rotation = a - 90
        
    def touching(self, pos=(0, 0), distance=0):
        '''碰撞检测'''
        d = sqrt((self.x - pos[0]) ** 2 + (self.y - pos[1]) ** 2)
        return d < distance
    
class Turtle(pyglet.window.Window):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.set_caption('Pyglet Turtle Graphics')
        self.bgcolor('#ffffff')
        w, h = super().get_size()
        self.pen = SpritePen(w, h)

    def title(self, titlestring):
        self.set_caption(titlestring)
    
    def on_draw(self):
        '''绘制游戏画面'''
        self.pen.draw()

    def done(self):
       pyglet.app.run()

    def screensize(self, w, h):
        super().set_size(w, h)
        self.pen.set_size(w, h)

    def clear(self):
        self.pen.clear()

    def reset(self):
        self.pen.reset()

    def bgcolor(self, c):
        (r, g, b) = rgbcolor(c)
        glClearColor(r/255.0, g/255.0, b/255.0, 1)
        glClear(GL_COLOR_BUFFER_BIT)
        
    def seth(self, angle):
        self.pen.seth(angle)
        
    def setheading(self, angle):
        self.pen.seth(angle)
    
    def heading(self):
        return self.pen.heading()

    def up(self):
        self.pen.up()

    def down(self):
        self.pen.down()

    def penup():
        self.pen.up()

    def pendown():
        self.pen.down()
        
    def pu():
        self.pen.up()
        
    def pd():
        self.pen.down()

    def goto(self, x, y):
        self.pen.goto(x, y)

    def setpos(self, x, y):
        self.pen.goto(x, y)

    def setposition(self, x, y):
        self.pen.goto(x, y)
        
    def setx(self, x):
        self.pen.setx(x)

    def sety(self, y):
        self.pen.sety(y)
        
    def xcor(self):
        return self.pen.xcor()
        
    def ycor(self):
        return self.pen.ycor()

    def pos(self):
        return self.pen.position()

    def position(self):
        return self.pen.position()

    def home(self):
        self.pen.home()
        
    def dot(self, size, color):
        self.pen.dot(size, color)

    def fd(self, d):
        self.pen.fd(d)

    def forward(self, d):
        self.pen.fd(d)
    
    def backward(self, d):
        self.pen.fd(-d)

    def bk(self, d):
        self.pen.fd(-d)

    def back(self, d):
        self.pen.fd(-d)

    def left(self, a):
        self.pen.left(a)

    def lt(self, a):
        self.pen.left(a)

    def right(self, a):
        self.pen.right(a)

    def rt(self, a):
        self.pen.right(a)

    def pensize(self, s):
        self.pen.pensize(s)

    def width(self, s):
        self.pen.pensize(s)

    def pencolor(self, c = None):
        if c == None:
            return self.pen.pencolor()
        else:
            self.pen.pencolor(c)

    def color(self, c):
        self.pen.pencolor(c)

    def fillcolor(self, c):
        pass

    def speed(self, s):
        pass

    def mode(self, m):
        pass

    def begin_fill(self):
        pass

    def end_fill(self):
        pass

    def colormode(self, b):
        pass

    def circle(self, radius, extent = None, steps = None):
        pass

    def showturtle(self):
        pass

    def st(self):
        pass

    def hideturtle(self):
        pass

    def ht(self):
        pass

    def shape(self, name = None):
        pass
    
    def textinput(self, title, prompt):
        pass

    def numinput(self, title, prompt, default = None, minval = None, maxval = None):
        pass

    def write(self, arg, move = False, align = 'left', font = ('Arial', 8, 'normal')):
        pass

turtle = Turtle(width=480, height=360)

def done():
    turtle.done()

def clear():
    turtle.clear()

def reset():
    turtle.reset()

def screensize(w, h):
    turtle.screensize(w, h)

def title(titlestring):
    turtle.title(titlestring)

def bgcolor(c):
    turtle.bgcolor(c)

def seth(angle):
    turtle.seth(angle)

def setheading(angle):
    turtle.setheading(angle)
    
def heading():
    return turtle.heading()

def up():
    turtle.up()

def down():
    turtle.down()

def penup():
    turtle.up()

def pendown():
    turtle.down()
    
def pu():
    turtle.up()

def pd():
    turtle.down()

def goto(x, y):
    turtle.goto(x, y)

def setpos(x, y):
    turtle.setpos(x, y)

def setposition(x, y):
    turtle.setposition(x, y)

def setx(x):
    turtle.setx(x)

def sety(y):
    turtle.sety(y)
    
def xcor():
    return turtle.xcor()

def ycor():
    return turtle.ycor()

def pos():
    return turtle.pos()

def position():
    return turtle.position()

def home():
    turtle.home()

def dot(size, color = None):
    if color == None:
        color = turtle.pencolor()
    turtle.dot(size, color)

def fd(d):
    turtle.fd(d)
    
def forward(d):
    turtle.fd(d)
    
def backward(d):
    turtle.backward(d)

def bk(d):
    turtle.bk(d)

def back(d):
    turtle.back(d)
        
def left(a):
    turtle.left(a)
    
def lt(a):
    turtle.lt(a)   

def right(a):
    turtle.right(a)
    
def rt(a):
    turtle.rt(a)
    
def pensize(s):
    turtle.pensize(s)

def width(s):
    turtle.width(s)
    
def pencolor(c):
    turtle.pencolor(c)

def color(c):
    turtle.color(c)

def fillcolor(c):
    pass
    
def speed(s):
    pass

def mode(m):
    pass

def begin_fill():
    pass

def end_fill():
    pass

def colormode(n):
    pass

def circle(radius, extent = None, steps = None):
    pass

def showturtle():
    pass

def st():
    pass

def hideturtle():
    pass

def ht():
    pass

def shape(name = None):
    pass

def textinput(title, prompt):
    pass

def numinput(title, prompt, default = None, minval = None, maxval = None):
    pass

def write(arg, move = False, align = 'left', font = ('Arial', 8, 'normal')):
    pass
