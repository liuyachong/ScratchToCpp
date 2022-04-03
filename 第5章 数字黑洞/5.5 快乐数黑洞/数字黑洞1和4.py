'''
程序：快乐数黑洞(数字黑洞1和4)
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def sum_squares(n):
    '''求平方和'''
    sumsq = 0
    while n > 0:
        d = n % 10
        sumsq += d * d
        n = n // 10
    return sumsq

def branch4(n):
    '''分支数字黑洞4'''
    print(n)
    if n == 20:
        return
    sumsq = sum_squares(n)
    branch4(sumsq)

def blackhole14(n):
    '''数字黑洞1和4'''
    if n == 4:
        branch4(n)
        return
    print(n)
    if n == 1:
        return
    sumsq = sum_squares(n)
    blackhole14(sumsq)

def main():
    '''入口程序'''
    n = int(input('请输入一个非0自然数：'))
    blackhole14(n)

if __name__ == '__main__':
    main()
