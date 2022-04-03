'''
程序：颠倒车牌号
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''颠倒车牌号'''
    total = 0
    for i in range(0, 100000):
        # 用零补足5位数
        number = '0' * (5 - len(str(i))) + str(i)
        # 颠倒数字
        reverse = ''
        for digit in number:
            reverse = '0100009086'[int(digit)] + reverse
        # 找到符合的数字
        if number == reverse:
            print(number)
            total += 1
    # 输出符合的车牌号数量
    print(total)

if __name__ == '__main__':
    main()
