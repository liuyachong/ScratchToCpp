'''
程序：菊花曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import pi, sin, cos

def draw():
    '''绘制菊花曲线'''
    colors = ('purple', 'orange', 'red', 'green',
              'blue', 'yellow', 'navy')
    a, t = 15, 0
    for cycle in range(1, 13):
        pencolor(colors[cycle % 7])
        while t <= cycle * 360:
            rad = pi / 180 * t
            r = 5 * (1 + sin(11 * rad / 5)) - \
                    (4 * sin(17 * rad / 3) ** 4) \
                    * (sin(2 * cos(3 * rad)-28 * rad) ** 8)
            x = a * sin(rad) * r
            y = a * cos(rad) * r
            goto(x, y)
            t += 1

if __name__ == '__main__':
    '''画笔初始化'''
    bgcolor('black')
    speed(0)
    pensize(2)
    draw()
