'''
程序：选择排序
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def selection_sort(a):
    '''选择排序'''
    j = 0                           # 起始位置
    end = len(a) - 1                # 结束位置
    while j < end:                  # 对未排序区域的元素进行排序
        p = j                       # 以未排序区域头部位置元素作为最小值
        i = j + 1                   # 从未排序区域的第二个元素开始比较
        print('第%d轮排序' % i)
        while i <= end:             # 遍历未排序区域
            if a[i] < a[p]:         # 从未排序区域中找到一个最小元素
                p = i               # 记录最小元素的位置
            print(j, i, p, sep=',')
            i = i + 1               # 向后移动未排序区域的游标
        a[j], a[p] = a[p], a[j]     # 将最小元素交换到未排序区域头部
        print(a)
        j = j + 1                   # 未排序区域的头部位置向后移动一位
    
def main():
    '''主程序'''
    a = [7, 8, 4, 2, 6]
    print('排序前：', a)
    selection_sort(a)
    print('排序后：', a)

if __name__ == '__main__':
    main()
