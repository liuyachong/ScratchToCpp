'''
程序：一尺之棰
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''一尺之棰'''
    n = 1
    s = 0
    while s < 1:
        n = 2 * n
        s += 1/n
        print('1/%s : %s' % (n, s))
    
if __name__ == '__main__':
    main()
