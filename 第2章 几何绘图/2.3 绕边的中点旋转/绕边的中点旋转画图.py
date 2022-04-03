'''
程序：绕边的中点旋转图形
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *

def draw_polygon(c, n):
    '''画正多边形'''
    fd(c/n/2)
    left(360/n)
    for i in range(n-1):
        fd(c/n)
        left(360/n)
    fd(c/n/2)
        
def rotate_figure(c, n, t):
    '''绕边的中点旋转图形'''
    for i in range(t):
        draw_polygon(c, n)
        left(360/t)

def main():
    '''主程序'''
    mode('logo')
    pencolor('black')
    pensize(4)
    seth(90)
    c = 500                # 周长
    n = 3                  # 边数
    t = 6                  # 个数
    rotate_figure(c, n, t) # 旋转画图

if __name__ == '__main__':
    main()
