'''
程序：外摆线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import pi, sin, cos

def draw(n, end):
    '''绘制外摆线'''
    a = 45
    b = a / n
    t = 0
    while t <= end:
        rad = pi / 180 * t
        x = (a + b) * cos(rad) - b * cos((a + b) / b * rad)
        y = (a + b) * sin(rad) - b * sin((a + b) / b * rad)
        goto(x, y)
        down()
        t += 1

if __name__ == '__main__':
    '''画笔初始化'''
    speed(0)
    pencolor('seagreen')
    pensize(2)
    up()
    draw(5/2, 2 * 360)
