'''
程序：二果问价
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''二果问价'''
    x = 1
    while True:
        y = 1000 - x
        if 11 * x / 9 + 4 * y / 7 == 999:
            xm = 11 * x / 9
            ym = 4 * y / 7
            print('买了甜果%d个，花了%d文钱' % (x, xm))
            print('买了苦果%d个，花了%d文钱' % (y, ym))
            break
        x += 1

if __name__ == '__main__':
    main()
