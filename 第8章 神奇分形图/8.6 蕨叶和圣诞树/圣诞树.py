'''
程序：圣诞树分形图
作者：苏秦@小海豚科学馆公众号
来源：图书《从Scratch到Python轻松学》
'''
from turtle_plus import *
from random import randint

def draw(length, toward):
    '''递归画圣诞树分形'''
    if length < 1:
        draw_gift()
        return
    
    draw_line(length)
    rotation(length * 0.9, 0 - main_angle, toward)
    rotation(length * scale, randint(100, 120), -1)
    fd(length * offset)
    rotation(length * scale, randint(100, 120), 1)
    fd(0 - length * offset)
    fd(0 - length)
    return
    
def rotation(length, angle, toward):
    '''旋转'''
    if length < 15:
        left(angle * toward)
        draw(length, toward)
        right(angle * toward)
    else:
        draw(length, toward)
    return

def draw_line(length):
    '''画线'''
    pensize(length / 6)
    if length < 2:
        pencolor('#20891d')
    else:
        pencolor('#4b6d3c')
    down()
    fd(length)
    up()
    return

def draw_gift():
    '''画礼物'''
    if randint(1, 100) == 1:
        colors = ('red', 'white', 'yellow', 'blue', 'pink')
        dot(5, colors[randint(0, 4)])
    return

if __name__ == '__main__':
    '''绘制圣诞树分形图'''
    mode('logo')
    speed(0)
    seth(0)
    up()
    goto(0, -170)
    down()
    main_angle = 0
    offset = 0.2
    scale = 0.5
    angle = 100
    draw_line(50)
    draw(30, 1)
    done()
