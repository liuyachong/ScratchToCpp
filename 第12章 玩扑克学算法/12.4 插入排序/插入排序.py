'''
程序：插入排序
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def insertion_sort(a):
    '''插入排序'''
    j = 1                                    # 未排序区域起始位置
    end = len(a) - 1                         # 未排序区域结束位置
    while j <= end:                          # 将未排序区域的元素移到已排序区域
        i = j                                # 设定未排序区域的起始位置
        print('第%d轮排序' % i)
        while i > 0:                         # 把未排序区域头部元素放到已排序区域
            if a[i] < a[i-1]:                # 比较相邻两元素
                a[i], a[i-1] = a[i-1], a[i]  # 把小的元素交换到前面
                print(j, i, i-1, a, sep=',')
                i = i - 1                    # 向前移动已排序区域的游标
            else:
                print('跳过')
                i = 0                        # 元素放到正确位置后跳出内循环
        print()
        j = j + 1                            # 未排序区域的头部位置向后移动一位
    
def main():
    '''主程序'''
    a = [6, 4, 8, 2, 7]
    print('排序前：', a)
    insertion_sort(a)
    print('排序后：', a)

if __name__ == '__main__':
    main()
