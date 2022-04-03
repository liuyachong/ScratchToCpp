'''
程序：谢尔宾斯基三角形
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from turtle import *

def draw(b, n):
    '''递归绘制正三角形'''
    if n == 0: return     # 递归结束条件
    
    for i in range(3):
        draw(b/2, n-1)    # 递归调用，每次缩小b、n的值
        left(120)
        fd(b)
    return

if __name__ == '__main__':
    '''绘制一个边长为400的谢尔宾斯基三角形'''
    mode('logo')
    speed(0)              # 快速画图
    pencolor('blue')
    pensize(2)
    up()
    goto(200, -175)
    seth(90)
    down()
    draw(400, 6)
