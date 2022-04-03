'''
程序：更相减损术
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def gcd(a, b):
    '''更相减损术'''
    c = 1
    while a != b:
        if a % 2 == 0 and b % 2 == 0:
            a = a // 2
            b = b // 2
            c = c * 2
        else:
            if a > b:
                a = a - b
            else:
                b = b - a
    return b * c
    
def main():
    n = gcd(168, 48)
    print(n)

if __name__ == '__main__':
    main()
