'''
程序：自定义外摆线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import pi, sin, cos


def draw(a, b, end):
    '''绘制自定义外摆线图形'''
    t = 0
    while t <= end:
        rad = pi / 180 * t
        x = (a + b) * cos(rad) - b * cos((a + b) * b * rad)
        y = (a + b) * sin(rad) - b * sin((a + b) * b * rad)
        goto(x, y)
        down()
        t += 1

if __name__ == '__main__':
    '''画笔初始化'''
    speed(0)
    pencolor('seagreen')
    pensize(1)
    up()
    draw(6, 67, 1 * 360)
