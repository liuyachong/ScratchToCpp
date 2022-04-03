'''
程序：细胞分裂
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''细胞分裂'''
    cells = 1
    total = 1
    for i in range(44):
        cells = 2 * cells
        total += cells
    print('细胞数量是%d' % total)

if __name__ == '__main__':
    main()
