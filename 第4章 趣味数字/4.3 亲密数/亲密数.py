'''
程序：寻找亲密数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def factors_sum(n):
    '''求一个数的真因数之和'''
    s = 0
    for i in range(1, n):
        if n % i == 0:     # 判断是否因数 
            s += i         # 累加真因数之和
    return s
    
def main():
    '''寻找亲密数'''
    for a in range(1, 2000):
        b = factors_sum(a)
        if a < b:
            bs = factors_sum(b)
            if bs == a:
                print('(%d,%d)' % (a, b))
        
if __name__ == '__main__':
    '''程序入口'''
    main()
