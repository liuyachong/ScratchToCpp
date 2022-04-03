'''
程序：客人几人
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''客人几人'''
    x = 1
    while x <= 65:
        if x / 2 + x / 3 + x / 4 == 65:
            print('客有%d人' % x)
            break
        x += 1

if __name__ == '__main__':
    main()
