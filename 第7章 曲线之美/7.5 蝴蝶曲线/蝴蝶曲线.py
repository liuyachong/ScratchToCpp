'''
程序：蝴蝶曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import pi, e, sin, cos

def draw():
    '''绘制蝴蝶曲线'''
    cycle, t = 12, 0
    a, b = 40, 40
    while t <= cycle * 360:
        rad = pi / 180 * t
        p = e ** cos(rad) - 2 * cos(4*rad) + sin(rad/12) ** 5
        x = a * sin(rad) * p
        y = b * cos(rad) * p
        goto(x, y)
        t = t + 1

if __name__ == '__main__':
    '''画笔初始化'''
    speed(0)
    color('red')
    pensize(1)
    draw()
