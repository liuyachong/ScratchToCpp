/*
程序：二分查找 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 二分查找
int binary_search(int target, int a[], int len)
{
	int left = 0;                                   // 起始位置
    int right = len - 1;                            // 结束位置 
    while (left <= right) {                         // 不可定位时结束查找
        int mid = (int)((right - left) / 2) + left; // 计算中间位置
        if (target == a[mid]) {                     // 找到目标数据，返回其位置
            return mid;
        }
        else if (target < a[mid])                   // 在前半部分查找
            right = mid - 1;
        else                                        // 在后半部分查找
            left = mid + 1;
    }
    return -1;                                      // 查找失败时返回-1
}
 
int main()
{
	int a[] = {2, 3, 5, 7, 8, 9};                   // 要求数据是有序排列的
	int len = sizeof(a) / sizeof(int);
	
    cout << "输入要查找的数据："; 
    int n; cin >> n;
    int pos = binary_search(n, a, len);
    if (pos == -1)
        cout << "找不到！";
    else
        cout << "位置：" << pos; 
    return 0;
}
