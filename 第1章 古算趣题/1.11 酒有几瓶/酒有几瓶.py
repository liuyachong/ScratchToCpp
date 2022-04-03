'''
程序：酒有几瓶
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''酒有几瓶'''
    x = 1
    while x <= 11:
        y = 19 - x
        if 3 * x + y / 3 == 33:
            print('醇酒%d瓶，醨酒%d瓶' % (x, y))
            break
        x += 1

if __name__ == '__main__':
    main()
