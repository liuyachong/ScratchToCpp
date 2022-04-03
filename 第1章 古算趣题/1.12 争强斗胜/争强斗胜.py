'''
程序：争强斗胜
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''争强斗胜'''
    x = 1
    while True:
        y = (36 - x ) / 3
        if 8 * x + 6 * y == 108:
            print('夜叉%d人，哪吒%d人' % (x, y))
            break
        x += 1

if __name__ == '__main__':
    main()
