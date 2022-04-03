'''
程序：日行几里
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''日行几里'''
    n, t = 1, 1                # 份数n、总份数t
    for i in range(5):         # 求总份数
        n = 2 * n
        t += n
    d = 378 * (16 / t)         # 计算第2天的路程
    print('第2天走了%d里路' % d)

if __name__ == '__main__':
    main()
