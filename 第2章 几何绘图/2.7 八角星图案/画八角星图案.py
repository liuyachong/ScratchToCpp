'''
程序：画八角星图案
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *

def draw_figure(b):
    '''画基本图形八角星'''
    for i in range(8):
        right(45)
        forward(b)
        left(90)
        fd(b)

def rotate_figure(b, t):
    '''绕顶点旋转图形'''
    for i in range(t):
        draw_figure(b)
        left((360 / t))

def main():
    '''画八角星图案'''
    mode('logo')
    pencolor('black')
    pensize(4)
    setheading(90)
    b = 35              # 边长
    t = 8               # 个数
    rotate_figure(b, t) # 旋转画图

if (__name__ == '__main__'):
    main()
