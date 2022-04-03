'''
程序：寻找金蝉素数
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

def is_valid(num):
    '''检测数字'''
    digits = []
    while num > 0:
        d = num % 10
        if d in digits or d % 2 == 0:    # 排除相同的数字或偶数
            return False
        else:
            digits.append(d)
            num = num // 10
    if digits[2] == 1 or digits[2] == 9: # 保证中间数是素数，即二次脱壳
        return False
    return True

def main():
    '''寻找金蝉素数'''
    n = 13579
    while n <= 97531:
        if is_valid(n) and is_prime(n):
            m = n % 10000
            m = m // 10
            if is_prime(m):
                print(n)
        n += 2

if __name__ == '__main__':
    main()
