/*
程序：冒泡排序 
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

// 冒泡排序 
void bubble_sort(int a[], int size)
{
	int j = 1;                    // 起始位置 
	int end = size - 1;           // 结束位置 
	while (j <= end) {            // 对未排序区域的元素进行排序
		int i = end;              // 从未排序区域末尾向前排序
		cout << "第" << j << "轮排序" << endl;
		while (i >= j) {          // 遍历未排序区域
			if (a[i] < a[i-1]) {  // 比较相邻两元素
				int temp = a[i];  // 把小的元素交换到前面
				a[i] = a[i-1];
				a[i-1] = temp;
			}
			cout << j << "," << i << "," << i-1 << ","
			     << arr_to_str(a, size) << endl;
			i = i - 1;             // 向前移动未排序区域的游标
		}
		cout << endl;
		j = j + 1;                 // 未排序区域头部位置向后移动一位
	}
}

// 主程序 
int main()
{
	int a[] = {8, 6, 4, 7, 2};
	int len = sizeof(a) / sizeof(int);
	cout << "排序前：" << arr_to_str(a, len) << endl;
	bubble_sort(a, len);
	cout << "排序后：" << arr_to_str(a, len) << endl;
    return 0;
}
