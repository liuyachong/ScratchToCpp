/*
程序：选择排序 
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

// 选择排序 
void selection_sort(int a[], int size)
{
	int j = 0;                // 起始位置 
	int end = size - 1;       // 结束位置 
	while (j < end) {         // 对未排序区域的元素进行排序
		int p = j;            // 以未排序区域头部位置元素作为最小值
		int i = j + 1;        // 从未排序区域的第二个元素开始比较
		cout << "第" << i << "轮排序" << endl;
		while (i <= end) {    // 遍历未排序区域
			if (a[i] < a[p])  // 从未排序区域中找到一个最小元素
				p = i;        // 记录最小元素的位置
			cout << j << "," << i << "," << p << endl;
			i = i + 1;        // 向后移动未排序区域的游标
		}
		int temp = a[j];      // 将最小元素交换到未排序区域头部
		a[j] = a[p];
		a[p] = temp;
		cout << arr_to_str(a, size) << endl;
		j = j + 1;            // 未排序区域的头部位置向后移动一位
	}
}

// 主程序 
int main()
{
	int a[] = {7, 8, 4, 2, 6};
	int len = sizeof(a) / sizeof(int);
	cout << "排序前：" << arr_to_str(a, len) << endl;
	selection_sort(a, len);
	cout << "排序后：" << arr_to_str(a, len) << endl;
    return 0;
}
