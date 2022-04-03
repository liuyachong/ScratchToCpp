/*
程序：插入排序 
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

// 插入排序 
void insertion_sort(int a[], int size)
{
	int j = 1;                     // 未排序区域起始位置
	int end = size - 1;            // 未排序区域结束位置
	while (j <= end) {             // 将未排序区域的元素移到已排序区域
		int i = j;                 // 设定未排序区域的起始位置
		cout << "第" << i << "轮排序" << endl;
		while (i > 0) {            // 把未排序区域头部元素放到已排序区域
			if (a[i] < a[i-1]) {   // 比较相邻两元素
				int temp = a[i];   // 把小的元素交换到前面
				a[i] = a[i-1];
				a[i-1] = temp;
				cout << j << "," << i << "," << i-1 << ","\
				     << arr_to_str(a, size) << endl; 
				i = i - 1;         // 向前移动已排序区域的游标
			}
			else {
				cout << "跳过" << endl;
				i = 0;             // 元素放到正确位置后跳出内循环
			}
		}
		cout << endl;
		j = j + 1;                 // 未排序区域的头部位置向后移动一位
	}
}

// 主程序 
int main()
{
	int a[] = {6, 4, 8, 2, 7};
	int len = sizeof(a) / sizeof(int);
	cout << "排序前：" << arr_to_str(a, len) << endl;
	insertion_sort(a, len);
	cout << "排序后：" << arr_to_str(a, len) << endl;
    return 0;
}
