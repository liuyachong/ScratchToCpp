/*
程序：快速排序 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 将数组序列化 
string arr_to_str(int a[], int size)
{
	stringstream ss; ss << "[";
	int i = 0;
	for (; i < size - 1; i++)
		 ss << a[i] << ", ";
	ss << a[i] << "]";
	return ss.str();
}

// 交换元素
void swap(int a[], int x, int y)
{
    if (x == y) {
        cout << "不交换：" << a[x] << "," << a[y] << endl;
        return;
    }
    cout << "交换：" << a[x] << "," << a[y] << endl;
    int temp = a[x]; a[x] = a[y]; a[y] = temp;
    return;
}

// 一次交换排序
int partition(int a[], int left, int right)
{
    int base = left; // 以未排序区域左端第一个元素为基准
    while (left < right) {
    	// 从右向左找出一个小于基准的元素
        while (a[right] >= a[base] and left < right)
            right = right - 1;
        // 从左向右找出一个大于基准的元素
        while (a[left] <= a[base] and left < right)
            left = left + 1;
        // 交换位置不同的两个元素
        if (left < right)
            swap(a, left, right);
    }
    // 位置相同的两个元素(此时为同一元素)与基准元素交换
    swap(a, base, left);
    // 返回基准所在位置 
    return left;
}

// 快速排序 
void quicksort(int a[], int left, int right)
{
	if (left < right) {                       // 未排序区域不可分割时排序结束
		int base = partition(a, left, right); // 让基准元素归位，返回基准位置
		quicksort(a, left, base - 1);         // 对基准左边的分区进行排序
		quicksort(a, base + 1, right);        // 对基准右边的分区进行排序
	}
}

// 主程序 
int main()
{
	int a[] = {7, 6, 8, 2, 4};
	int len = sizeof(a) / sizeof(int);
	cout << "排序前：" << arr_to_str(a, len) << endl;
	quicksort(a, 0, len - 1);
	cout << "排序后：" << arr_to_str(a, len) << endl;
    return 0;
}
