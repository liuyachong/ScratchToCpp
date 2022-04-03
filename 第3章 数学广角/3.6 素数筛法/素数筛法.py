'''
程序：素数筛法
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def find_primes(n):
    '''素数筛法'''
    # 生成2到n之间数表
    primes = [i for i in range(2, n)]
    # 根据埃拉托色尼筛法删除合数 
    p, j = 0, 0
    while p * p <= n:
        p = primes[j]
        i = j + 1
        while i < len(primes):
            if primes[i] % p == 0:
                del primes[i]
            else:
                i += 1
        j += 1
    # 输出素数表
    print(primes)
    
def main():
    '''主程序'''
    n = 1000        # 设定筛选的最大数
    find_primes(n)  # 筛选素数

if __name__ == '__main__':
    main()
