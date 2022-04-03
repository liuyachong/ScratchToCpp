'''
程序：微生物增殖
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''微生物增殖'''
    x, y, time = 10, 90, 1
    while time <= 60:
        y = y - x
        if time % 2 == 0:
            y = y * 2
        if time % 3 == 0:
            x = x * 2
        time += 1
    print('60min后y的数量是', y)

if __name__ == '__main__':
    main()
