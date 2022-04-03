'''
程序：将军追校
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''将军追校'''
    x = 1
    while True:
        if x / 10 == 320 / 40:
            print('将军再走%d步可追上小校' % x)
            break
        x += 1

if __name__ == '__main__':
    main()
