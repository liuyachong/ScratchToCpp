'''
程序：寻找勾股数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''寻找勾股数'''
    for a in range(3, 100):
        for b in range(a + 1, 100):
            for c in range(b + 1, 100):
                if a * a + b * b == c * c:
                    print('%d, %d, %d' % (a, b, c))
            
if __name__ == '__main__':
    '''程序入口'''
    main()
