'''
程序：快速排序
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def swap(a, x, y):
    '''交换元素'''
    if x == y:
        print('不交换：%d,%d' % (a[x], a[y]))
        return
    print('交换：%d,%d' % (a[x], a[y]), a, end='')
    a[x], a[y] = a[y], a[x]
    print(a)
    
def partition(a, left, right):
    '''一次交换排序'''
    base = left # 以未排序区域左端第一个元素为基准
    while left < right:
        # 从右向左找出一个小于基准的元素
        while a[right] >= a[base] and left < right:
            right = right - 1
        # 从左向右找出一个大于基准的元素
        while a[left] <= a[base] and left < right:
            left = left + 1
        # 交换位置不同的两个元素
        if left < right:
            swap(a, left, right)
    # 位置相同的两个元素(此时为同一元素)与基准元素交换
    swap(a, base, left)
    # 返回基准所在位置
    return left

def quicksort(a, left, right):
    '''快速排序'''
    if left < right:                     # 未排序区域不可分割时排序结束
        base = partition(a, left, right) # 让基准元素归位，返回基准位置
        quicksort(a, left, base - 1)     # 对基准左边的分区进行排序
        quicksort(a, base + 1, right)    # 对基准右边的分区进行排序
        
def main():
    '''主程序'''
    a = [7, 6, 8, 2, 4]
    print('排序前：', a)
    quicksort(a, 0, len(a) - 1)
    print('排序后：', a)
    
if __name__ == '__main__':
    main()

