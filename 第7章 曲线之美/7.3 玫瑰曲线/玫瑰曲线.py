'''
程序：玫瑰曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import pi, sin, cos

def draw(n, end):
    '''绘制玫瑰曲线'''
    a = 150
    t = 0
    while t <= end:
        rad = pi / 180 * t
        x = cos(rad) * a * sin(n * rad)
        y = sin(rad) * a * sin(n * rad)
        goto(x, y)
        t += 1

if __name__ == '__main__':
    '''画笔初始化'''
    speed(0)
    pencolor('red')
    pensize(2)
    draw(2/3, 6 * 180)
