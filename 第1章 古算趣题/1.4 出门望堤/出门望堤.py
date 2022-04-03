'''
程序：出门望堤
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''出门望堤'''
    n = 1
    for i in range(8): # 依次计算堤、木、枝、巢、禽、雏、毛、颜色的数量
        n = 9 * n
        print(n)

if __name__ == '__main__':
    main()
