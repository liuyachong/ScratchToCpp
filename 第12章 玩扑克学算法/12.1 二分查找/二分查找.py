'''
程序：二分查找
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def binary_search(target, a):
    '''二分查找'''
    left = 0                              # 起始位置
    right = len(a) - 1                    # 结束位置
    while left <= right:                  # 不可定位时结束查找
        mid = (right - left) // 2 + left  # 计算中间位置
        if target == a[mid]:              # 找到目标数据，返回其位置
            return mid
        elif target < a[mid]:             # 在前半部分查找
            right = mid - 1
        else:                             # 在后半部分查找
            left = mid + 1
    return -1                             # 查找失败时返回-1

def main():
    '''主程序'''
    a = [2, 3, 5, 7, 8, 9]                # 要求数据是有序排列的
    n = int(input('请输入要找的数据：'))
    pos = binary_search(n, a)
    if pos == -1:
        print('找不到！')
    else:
        print('位置：', pos)
    
if __name__ == '__main__':
    main()
