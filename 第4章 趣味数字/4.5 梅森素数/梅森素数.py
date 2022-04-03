'''
程序：寻找梅森素数
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
    '''寻找梅森素数'''
    for p in range(2, 21):
        m = 2 ** p - 1
        if is_prime(m):
            print(p, m)

if __name__ == '__main__':
    main()
