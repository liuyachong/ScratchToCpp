'''
程序：寻找回文素数
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

def reverse_num(num):
    '''反转数字'''
    reverse = 0
    while num > 0:
        remainder = num % 10
        reverse = reverse * 10 + remainder
        num = num // 10
    return reverse

def main():
    '''寻找回文素数'''
    for n in range(11, 200):
        if n == reverse_num(n):
            if is_prime(n):
                print(n)

if __name__ == '__main__':
    main()
