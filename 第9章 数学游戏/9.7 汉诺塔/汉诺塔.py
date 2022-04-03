'''
程序：汉诺塔
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def move(n, a, b, c):
    '''移动盘子'''
    if n > 0:
        move(n-1, a, c, b)
        print('%d:%s->%s' % (n, a, c))
        move(n-1, b, a, c)
    
def main():
    '''汉诺塔游戏'''
    n = int(input('请输入汉诺塔盘子数量:'))
    move(n, 'A', 'B', 'C')

if __name__ == '__main__':
    main()
