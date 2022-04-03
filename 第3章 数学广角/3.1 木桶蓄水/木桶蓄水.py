'''
程序：木桶蓄水
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''木桶蓄水'''
    time = 0
    barrel = 0
    while barrel < 1:               # 注满水桶
        time += 1                   # 增加时间
        barrel += (1/24 + 1/15)     # 两个水管同时注水
        barrel -= 1/120             # 小孔放水
        print(time, barrel, sep=': ')
    print('注满水桶需要%d分钟' % time)

if __name__ == '__main__':
    main()
