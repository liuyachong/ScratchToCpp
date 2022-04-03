'''
程序：西西弗斯黑洞(123数字黑洞)
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def blackhole123(n):
    '''西西弗斯黑洞'''
    print(n)
    if n == '123':
        return
    total = len(n)
    even, odd, i = 0, 0, 0
    while i < total:
        if int(n[i]) % 2 == 0:
            even += 1
        else:
            odd += 1
        i += 1
    m = '%d%d%d' % (even, odd, total)
    blackhole123(m)

def main():
    '''入口程序'''
    n = input('请任意输入一串数字：')
    blackhole123(n)

if __name__ == '__main__':
    main()
