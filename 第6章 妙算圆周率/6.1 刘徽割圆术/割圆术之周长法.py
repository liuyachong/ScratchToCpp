'''
程序：割圆术之周长法
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from math import sin, radians

def main():
    '''割圆术之周长法'''
    n = 6
    while n <= 3072:
        pi = sin(radians(180/n)) * n
        print(n, pi, sep='\t')
        n += 2

if __name__ == '__main__':
    main()
