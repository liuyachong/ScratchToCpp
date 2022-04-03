'''
程序：二进制数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''二进制数'''
    decimal = int(input('请输入一个十进制整数：'))
    if decimal == 0:
        binary = '0'
    else:
        binary = ''
        while decimal > 0:
            remainder = decimal % 2
            binary = str(remainder) + binary
            decimal = decimal // 2
    binary = '0b' + binary
    print(binary)

if __name__ == '__main__':
    main()
