'''
程序：莱布尼茨级数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''莱布尼茨级数'''
    pi, n, op = 0, 1, 1
    while True:
        pi = pi + op * (4 / n)
        print(n, '\t', pi)
        op = 0 - op
        n += 2
    
if __name__ == '__main__':
    main()
