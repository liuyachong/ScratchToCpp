'''
程序：笛卡儿心形曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import pi, sin, cos

def draw():
    '''绘制笛卡儿心形曲线'''
    a, t = 80, 90
    for i in range(360):
        rad = pi / 180 * t                # 角度转为弧度
        x = cos(rad) * a * (1 - sin(rad))
        y = sin(rad) * a * (1 - sin(rad))
        goto(x, y)
        t += 1

if __name__ == '__main__':
    '''画笔初始化'''
    color('red')
    pensize(3)
    draw()
