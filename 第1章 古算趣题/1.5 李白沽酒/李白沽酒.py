'''
程序：李白沽酒
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''李白沽酒'''
    n = 0                      # 酒量
    for i in range(4):
        n = (n + 6) / 2        # 反推瓶内酒量
    print('瓶内原有酒%s升' % n)

if __name__ == '__main__':
    main()
