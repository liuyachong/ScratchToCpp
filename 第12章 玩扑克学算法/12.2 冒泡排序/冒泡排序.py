'''
程序：冒泡排序
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def bubble_sort(a):
    '''冒泡排序'''
    j = 1                                   # 起始位置
    end = len(a) - 1                        # 结束位置
    while j <= end:                         # 对未排序区域的元素进行排序
        i = end                             # 从未排序区域末尾向前排序
        print('第%d轮排序' % j)
        while i >= j:                       # 遍历未排序区域
            if a[i] < a[i-1]:               # 比较相邻两元素
                a[i], a[i-1] = a[i-1], a[i] # 把小的元素交换到前面
            print(j, i, i-1, a, sep=',')
            i = i - 1                       # 向前移动未排序区域的游标
        print()
        j = j + 1                           # 未排序区域头部位置向后移动一位

def main():
    '''主程序'''
    a = [8, 6, 4, 7, 2]
    print('排序前：', a)
    bubble_sort(a)
    print('排序后：', a)

if __name__ == '__main__':
    main()
