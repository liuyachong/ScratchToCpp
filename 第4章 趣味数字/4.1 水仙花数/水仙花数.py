'''
程序：寻找水仙花数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''寻找水仙花数'''
    n = 100
    while n < 1000:
        a = n // 100
        b = n // 10 % 10
        c = n % 10
        if n == a * a * a + b * b * b + c * c * c:
            print(n)
        n += 1

if __name__ == '__main__':
    main()
