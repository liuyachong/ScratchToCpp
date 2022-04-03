'''
程序：经典勾股树
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import sin, cos, radians

def square(b):
    '''画正方形'''
    for i in range(4):
        fd(b)
        right(90)
    return

def draw(b, n):
    '''递归绘制勾股树'''
    #设定递归结束条件
    if n == 0: return
    
    angle = 45
    square(b)
    
    fd(b)
    left(angle)
    #在画左上方的小正方形之前进入递归调用
    draw(b * cos(radians(angle)), n-1)
    square(b * cos(radians(angle)))

    right(90)
    fd(b * cos(radians(angle)))
    #在画右上方的小正方形之前进入递归调用
    draw(b * sin(radians(angle)), n-1)
    square(b * sin(radians(angle)))

    right(90)
    fd(b * sin(radians(angle)))
    right(angle)
    fd(b)
    right(90)
    fd(b)
    right(90)
    return
        
if __name__ == '__main__':
    '''程序入口'''
    mode('logo')
    speed(0)
    pencolor('blue')
    pensize(2)
    up()
    seth(0)
    goto(0, -130)
    down()
    draw(100, 10)
