'''
程序：寻找孪生素数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def is_prime(n):
    '''判断素数'''
    if n <= 1:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True  

def main():
    '''寻找孪生素数'''
    for n in range(2, 100):
        if is_prime(n):
            if is_prime(n + 2):
                print('(%d,%d)' % (n, n + 2))

if __name__ == '__main__':
    main()
