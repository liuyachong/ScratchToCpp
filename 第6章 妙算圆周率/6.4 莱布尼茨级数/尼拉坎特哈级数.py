'''
程序：尼拉坎特哈级数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def calc_pi(count):
    '''用尼拉坎特哈级数计算圆周率'''
    pi, n, op = 3, 2, 1
    for i in range(count):
        pi = pi + op * (4 / (n * (n + 1) * (n + 2)))
        op = 0 - op
        n += 2
        print(pi)
    
if __name__ == '__main__':
    '''迭代1000次求π值'''
    calc_pi(1000)
