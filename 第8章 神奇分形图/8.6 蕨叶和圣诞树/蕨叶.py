'''
程序：蕨叶分形图
作者：苏秦@小海豚科学馆公众号
来源：图书《从Scratch到Python轻松学》
'''
from turtle_plus import *

def draw(length, toward):
    '''递归画蕨叶分形'''
    #递归结束条件
    if length < 1: return
    #画出主枝
    draw_line(length)
    #缩减主枝向右旋转5度继续生长
    rotation(length - 1, 0 - main_angle, toward)
    #画出右分枝
    rotation(length * scale, angle, -1)
    #偏移一定距离
    fd(length * offset)
    #画出左分枝
    rotation(length * scale, angle, 1)
    #画笔恢复初始位置
    fd(0 - length * offset)
    fd(0 - length)
    return
    
def rotation(length, angle, toward):
    '''旋转'''
    left(angle * toward)
    #间接递归调用
    draw(length, toward)
    right(angle * toward)
    return

def draw_line(length):
    '''画线'''
    pensize(length / 6)
    if length < 2:
        pencolor('#66bb21')
    else:
        pencolor('#4b6d3c')
    down()
    fd(length)
    up()
    return
    
if __name__ == '__main__':
    '''绘制蕨叶分形图'''
    mode('logo')
    speed(0)
    up()
    goto(-50, -150)
    seth(0)
    down()
    main_angle = 5
    offset = 0.2
    scale = 0.5
    angle = 60
    draw(30, 1)
    done()
