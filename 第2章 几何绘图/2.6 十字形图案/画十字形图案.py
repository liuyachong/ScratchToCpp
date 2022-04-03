'''
程序：画十字形图案
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *

def draw_figure():
    '''画基本图形十字形'''
    for i in range(4):
        fd(50)
        right(90)
        fd(50)
        left(90)
        fd(50)
        right(90)

def main():
    '''画十字形图案'''
    mode('logo')
    pencolor('black')
    pensize(4)
    seth(0)
    t = 4              # 个数
    for i in range(t): # 旋转画图
        draw_figure()
        left(360/t)

if __name__ == '__main__':
    main()
