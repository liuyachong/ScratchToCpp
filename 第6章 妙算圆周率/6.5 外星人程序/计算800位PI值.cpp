/*
程序：计算800位π值
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 获取公式中每一项的值
int get_item(int remainder[], int index)
{
	int item = 0;
	int i = index - 1;
	while (i >= 0) {
		item = item + remainder[i] * 10000;
		remainder[i] = item % (i * 2 + 1);
		item = item / (i * 2 + 1);
		if (i > 0) item = item * i;
		i -= 1;
	}
	return item;
}

// 计算800位π值 
int main()
{
	int digits = 800; // 设定计算圆周率的位数，要求能被4整除
	int length = digits / 4 * 14;
	int remainder[length] = {};
	for (int i = 0; i < length; i++) remainder[i] = 2000;
	// 按公式从最里面一层开始迭代，每次输出4位π值
	int pi = 0;
	int index = length; 
	while (index > 0) {
		int item = get_item(remainder, index);
		cout << setw(4) << setfill('0') << (pi + item / 10000);
		pi = item % 10000;
		index -= 14;
	}
	return 0;
}

