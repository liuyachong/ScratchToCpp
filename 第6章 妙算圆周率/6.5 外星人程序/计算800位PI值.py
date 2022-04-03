'''
程序：计算800位π值
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def get_item(remainder, index):
    '''获取公式中每一项的值'''
    item = 0
    i = index - 1 
    while i >= 0:
        item = item + remainder[i] * 10000
        remainder[i] = item % (i * 2 + 1)
        item = item // (i * 2 + 1)
        if i > 0: item = item * i
        i -= 1
    return item

def main():
    '''计算800位π值'''
    digits = 800 # 设定计算圆周率的位数，要求能被4整除
    length = digits // 4 * 14
    remainder = [2000] * length
    # 按公式从最里面一层开始迭代，每次输出4位π值
    pi = 0
    index = length
    while index > 0:
        item = get_item(remainder, index)
        print('%04d' % (pi + item // 10000), end='')
        pi = item % 10000
        index -= 14

if __name__ == '__main__':
    main()
        
