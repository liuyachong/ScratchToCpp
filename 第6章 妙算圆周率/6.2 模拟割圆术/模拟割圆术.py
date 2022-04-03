'''
程序：模拟割圆术
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *
from math import sin, radians
from time import sleep

def draw(a, n):
    '''画正多边形'''
    clear()
    pencolor('red')
    pensize(2)
    goto(0, 0)
    seth(180/n)
    for i in range(n):
        fd(a)
        right(360/n)
    
def main():
    '''模拟割圆术'''
    mode('logo')
    speed(0)
    bgpic('stage.gif')
    r, n = 100, 6
    for i in range(10):
        a = 2 * r * sin(radians(180/n))
        draw(a, n)
        pi = n * a / (2 * r)
        print(n, pi, sep='\t')
        n = n * 2
        sleep(3)

if __name__ == '__main__':
    main()
