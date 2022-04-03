def check(n):
    '''验证尼科彻斯定理'''
    cube = n * n * n
    a = 1
    while a <= cube:
        #生成连续奇数序列
        odd_numbers = list(range(a, a + 2 * n, 2))
        #对序列求和
        s = sum(odd_numbers)
        if s == cube:
            #输出序列
            print(odd_numbers)
            break
        a += 2
        
def main():
    '''主程序'''
    n = int(input('请输入一个自然数：'))
    check(n)
    
if __name__ == '__main__':
    main()
