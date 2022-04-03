'''
程序：桃心形曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import pi, sin, cos

def draw():
    '''绘制桃心形曲线'''
    a, t = 10, 0
    while t <= 360:
        rad = pi / 180 * t
        x = a * 15 * sin(rad) ** 3
        y = a * (15 * cos(rad) - 5 * cos(2*rad) \
                 - 2 * cos(3*rad) - cos(4*rad))
        goto(x, y)
        goto(0, 0)
        t += 0.5

if __name__ == '__main__':
    speed(0)
    color('red')
    pensize(3)
    draw()
