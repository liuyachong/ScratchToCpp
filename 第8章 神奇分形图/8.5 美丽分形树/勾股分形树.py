'''
程序：勾股分形树
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle_plus import *
from math import sin, cos, radians
from random import randint

def draw_branch(b):
    '''画树枝'''
    colors = (('#f4c6db', '#bb6489', '#452302'),
              ('#84c95b', '#276008', '#452302'),
              ('#ffc50b', '#f77226', '#452302'),
              ('#fdffff', '#dce4e9', '#452302'))
    c = colors[style] #选择不同的风格
    if b < 1:
        color(c[0])
    else:
        if b < 1.5:
            color(c[1])
        else:
            color(c[2])
    pensize(b/3)
    down()
    fd(b)
    up()
    return
        
def draw_tree(b):
    '''递归画勾股分形树'''
    #分枝小于指定值时结束递归
    if b < 1: return
    
    #设定夹角
    a = 10 * randint(2, 7)
    
    #画左侧分枝
    left(a)
    draw_branch(b * cos(radians(a)))
    draw_tree(b * cos(radians(a)))
    fd(0-b * cos(radians(a)))
    
    #画右侧分枝
    right(90)
    draw_branch(b * sin(radians(a)))
    draw_tree(b * sin(radians(a)))
    fd(0-b * sin(radians(a)))
    
    #恢复初始方向
    left(90 - a)

    #通过多次递归调用让树木更茂盛
    if randint(1, 10) >= 5:
        draw_tree(b * randint(0, 9) / 10)
    return

if __name__ == '__main__':
    '''绘制勾股分形树'''
    style = 1
    main_branch = 45
    mode('logo')
    speed(0)
    up()
    goto(0, -150)
    seth(0)
    draw_branch(main_branch) #画出树干
    draw_tree(main_branch)   #画勾股树
    done()
