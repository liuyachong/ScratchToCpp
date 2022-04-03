'''
程序：群羊逐草
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''群羊逐草'''
    x = 1
    while True:
        if x * (1 + 1 + 1/2 + 1/4) + 1 == 100:
            print('这群羊一共有%d只' % x)
            break
        x += 1

if __name__ == '__main__':
    main()
