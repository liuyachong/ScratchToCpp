'''
程序：用蒙特卡罗方法计算圆周率
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from random import randint
from math import sqrt

def calc_pi(total):
    '''用蒙特卡罗方法计算圆周率'''
    hits = 0
    for i in range(total):
        x = randint(-100, 100)
        y = randint(-100, 100)
        up()
        goto(x, y)
        if sqrt(x * x + y * y) > 100:
            dot(2, 'blue')
        else:
            dot(2, 'red')
            hits += 1
        down()
    pi = hits / total * 4
    print(pi)
    done()

if __name__ == '__main__':
    '''画笔初始化'''
    speed(0)
    calc_pi(100000)
