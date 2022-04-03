'''
程序：卡普雷卡尔黑洞(6174数字黑洞)
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
digits = [0] * 4              #存放分解后的4个数字

def calc_diff():
    '''重排求差'''
    a, b = '', ''
    for i in range(4):
        a += str(digits[i])   # 取得大数
        b += str(digits[3-i]) # 取得小数
    c = int(a) - int(b)       # 大数与小数之差
    return c

def split_num(n):
    '''分解数字'''
    global digits
    for i in range(4):
        digits[i] = n % 10   # 分离各位数字
        n = n // 10
    
def blackhole6174(n):
    '''6174数字黑洞'''
    print(n)                  # 输出中间值
    if n == 6174: return      # 递归结束
    split_num(n)              # 分解数字
    digits.sort(reverse=True) # 从大到小排序
    m = calc_diff()           # 重排求差
    blackhole6174(m)          # 重复进行操作

def main():
    '''入口程序'''
    n = int(input('请输入4位不完全相同的整数：'))
    blackhole6174(n)

if __name__ == '__main__':
    main()
