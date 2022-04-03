'''
程序：绕几何中心旋转图形
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *

def draw_polygon(c):
    '''画正多边形'''
    up()
    fd(c/4/2); left(90); fd(c/4/2)
    down()
    for i in range(4):
        left(90)
        fd(c/4)
    up()
    fd(0 - c/4/2); left(90); fd(c/4/2)
        
def rotate_figure(c, t):
    '''绕几何中心旋转图形'''
    for i in range(t):
        draw_polygon(c)
        left(90/t)

def main():
    '''主程序'''
    mode('logo')
    pencolor('black')
    pensize(4)
    seth(90)
    c = 500             # 周长
    t = 2               # 个数
    rotate_figure(c, t) # 旋转画图

if __name__ == '__main__':
    main()
