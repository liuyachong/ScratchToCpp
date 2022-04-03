'''
程序：红灯几盏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''红灯几盏'''
    x = 1
    while True:
        if x % 3 == 0 and x % 5 == 4 and x % 7 == 6:
            print('有灯笼%d盏' % x)
            break
        x += 1

if __name__ == '__main__':
    main()
