'''
程序：狐狸找兔子
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''狐狸找兔子'''
    holes = [0] * 10         # 每个洞的值设为0
    num = 0                  # 洞的编号
    i = 1
    while i <= 1000:
        num = (num + i) % 10 # 计算狐狸每次进洞的编号
        if num == 0:         # 若编号为0则用10代替
            num = 10
        holes[num-1] = 1     # 将洞的值设为1，即狐狸进过洞
        i += 1
    print(holes)             # 为0的元素表示狐狸未进过的洞
    
if __name__ == '__main__':
    main()
