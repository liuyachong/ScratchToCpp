'''
程序：鸡鸭若干
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''鸡鸭若干'''
    x = 1
    while True:
        y = x * 2
        if y - 8 == 3 * (x - 6):
            print('鸡有%d只，鸭有%d只' % (x, y))
            break
        x += 1

if __name__ == '__main__':
    main()
