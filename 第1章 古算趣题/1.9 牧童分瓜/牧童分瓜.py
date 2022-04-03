'''
程序：牧童分瓜
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''牧童分瓜'''
    x = 1
    while True:
        y = 13 * x + 15
        if y == 16 * x - 18:
            print('牧童%d人，瓜%d个' % (x, y))
            break
        x += 1

if __name__ == '__main__':
    main()
