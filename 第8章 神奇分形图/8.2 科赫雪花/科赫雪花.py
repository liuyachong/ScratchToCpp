'''
程序：科赫曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *

def draw_curve(b, n):
    '''递归绘制科赫曲线'''
    if n == 0:            # 递归结束条件
        fd(b)
        return
    
    draw_curve(b/3, n-1)  # 画线段①
    
    right(60)
    draw_curve(b/3, n-1)  # 画线段②
    
    left(120)
    draw_curve(b/3, n-1)  # 画线段③
    
    right(60)
    draw_curve(b/3, n-1)  # 画线段④
    return

def draw_snowflake(b, n):
    '''绘制科赫雪花'''
    for i in range(3):
        draw_curve(b, n)
        left(120)
    return

if __name__ == '__main__':
    '''绘制一个4阶的科赫雪花'''
    mode('logo')
    speed(0)
    pencolor('black')
    pensize(2)
    up()
    goto(-150, -90)
    seth(90)
    down()
    draw_snowflake(300, 4)
