'''
程序：画正多边形
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *

def draw_polygon(c, n):
    '''画正多边形'''
    for i in range(n):
        fd(c/n)
        left(360/n)
        
def main():
    '''主程序'''
    mode('logo')
    pencolor('black')
    pensize(4)
    seth(90)
    c = 500            # 周长
    n = 3              # 边数
    draw_polygon(c, n) # 绘制正n边形

if __name__ == '__main__':
    main()
