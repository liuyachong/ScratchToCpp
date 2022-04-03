'''
程序：诵课倍增
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''诵课倍增'''
    n, t = 1, 1              # 份数n、总份数t
    for i in range(2):       # 求总份数
        n = 2 * n
        t += n
        
    n = 1
    for i in range(1, 4):    # 计算各天阅读的字数
        x = 34685 * n // t
        print('第%d天读了%d字' % (i, x))
        n = 2 * n

if __name__ == '__main__':
    main()
