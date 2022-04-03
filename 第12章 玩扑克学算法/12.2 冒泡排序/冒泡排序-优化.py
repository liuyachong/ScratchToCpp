'''
程序：冒泡排序
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def bubble_sort(a):
    '''冒泡排序'''
    j = 1
    end = len(a) - 1
    while j <= end:
        i = end
        print('第%d轮排序' % j)
        flag = False
        while i >= j:
            if a[i] < a[i-1]:
                a[i], a[i-1] = a[i-1], a[i]
                flag = True
            print(j, i, i-1, a, sep=',')
            i = i - 1
        print()
        if not flag: break    # 如果一轮排序没有发生交换，则可以结束排序
        j = j + 1

def main():
    '''主程序'''
    a = [8, 6, 4, 7, 2]
    print('排序前：', a)
    bubble_sort(a)
    print('排序后：', a)

if __name__ == '__main__':
    main()
