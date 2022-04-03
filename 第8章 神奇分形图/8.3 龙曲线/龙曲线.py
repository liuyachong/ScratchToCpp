'''
程序：龙曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import sqrt

def get_turn_orders(n):
    '''生成转向序列'''
    orders = []
    for i in range(n):
        index = len(orders) - 1
        orders.append('L')
        while index >= 0:
            if orders[index] == 'R':
                orders.append('L')
            else:
                orders.append('R')
            index -= 1
    return orders

def get_length(b, n):
    '''计算n阶龙曲线的线段长度'''
    length = b
    for i in range(n):
        length = sqrt(length ** 2 / 2)
    return length

def draw_curve(b, n):
    '''绘制龙曲线'''
    orders = get_turn_orders(n)
    length = get_length(b, n)
    seth(n * 45 + 90)
    fd(length)
    for order in orders:
        if order == 'R':
            right(90)
        else:
            left(90)
        fd(length)
    return
    
if __name__ == '__main__':
    '''绘制一个10阶的龙曲线'''
    mode('logo')
    speed(0)
    pencolor('green')
    pensize(2)
    up()
    goto(-100, 0)
    seth(90)
    down()
    draw_curve(200, 10)
