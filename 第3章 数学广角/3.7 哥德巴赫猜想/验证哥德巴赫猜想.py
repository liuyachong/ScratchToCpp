'''
程序：验证哥德巴赫猜想
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def is_prime(n):
    '''判断素数'''
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True

def check(n):
    '''验证哥德巴赫猜想'''
    j = 2
    while j < n:
        # 将一个偶数分解为两个数，并判断是否为素数
        if is_prime(j) and is_prime(n-j):
            print('%d = %d + %d' % (n, j, n-j))
            break
        j += 1

def main():
    '''主程序'''
    n = 4
    while n < 1000:
        check(n)
        n += 2
    
if __name__ == '__main__':
    main()
