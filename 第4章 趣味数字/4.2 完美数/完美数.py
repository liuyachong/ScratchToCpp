'''
程序：寻找完美数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def is_perfect(n):
    '''判断一个自然数是否完美数'''
    s = 0
    for i in range(1, n):
        if n % i == 0:          #判断是否因数
            s += i              #累加真因数之和
    return s == n               #真因数之和等于该数自身则是完美数

def main():
    '''寻找完美数'''
    for n in range(1, 10000):
        if is_perfect(n):       #调用函数判断是否为完美数
            print(n)            #输出完美数
            
if __name__ == '__main__':
    '''程序入口'''
    main()
