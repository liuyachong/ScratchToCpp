'''
程序：冰雹猜想
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def bingbao(n):
    '''冰雹猜想'''
    print(n)
    if n > 1:
        if n % 2 == 0:
            bingbao(n // 2)
        else:
            bingbao(3 * n + 1)

def main():
    '''入口程序'''
    n = int(input('请输入一个正整数：'))
    bingbao(n)

if __name__ == '__main__':
    main()
