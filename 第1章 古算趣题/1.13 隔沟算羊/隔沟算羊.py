'''
程序：隔沟算羊
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''隔沟算羊'''
    x = 1
    while True:
        y = x - 18
        if 2 * (y - 9) == x + 9:
            print('甲有羊%d只，乙有羊%d只' % (x, y))
            break
        x += 1

if __name__ == '__main__':
    main()
