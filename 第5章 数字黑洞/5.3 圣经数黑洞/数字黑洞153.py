'''
程序：圣经数黑洞(153数字黑洞)
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def blackhole153(n):
    '''圣经数黑洞'''
    print(n)
    if n == 153:
        return
    # 求各位数字的立方和
    s = 0
    while n > 0:
        d = n % 10
        s += d * d * d
        n = n // 10
    # 反复操作
    blackhole153(s)

def main():
    '''入口程序'''
    n = int(input('请输入一个3的倍数的整数：'))
    if n % 3 == 0:
        blackhole153(n)
    else:
        print('请输入3的倍数！')

if __name__ == '__main__':
    main()
