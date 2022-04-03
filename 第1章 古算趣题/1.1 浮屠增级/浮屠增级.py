'''
程序：浮屠增级
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''浮屠增级'''
    n, t = 1, 1              # 份数n、总份数t
    for i in range(6):       # 求总份数
        n = 2 * n
        t += n
    d = 381 // t * 1         # 计算顶层灯数
    print('顶层有%s盏灯' % d)

if __name__ == '__main__':
    main()
