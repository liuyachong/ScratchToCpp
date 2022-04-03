/*
程序：卡普雷卡尔黑洞（6174数字黑洞） 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

int digits[4] = {0};                        // 存放分解后的4个数字

// 重排求差 
int calc_diff()
{
	string a(4, '0'), b(4, '0');
	for (int i = 0; i < 4; i++) {
		a[i] = digits[i] + 48;              // 取得大数 
		b[i] = digits[3-i] + 48;            // 取得小数 
	}
	stringstream ss; ss << a; int max; ss >> max;
	ss.clear(); ss << b; int min; ss >> min;
	int c = max - min;                      // 大数与小数之差 
	return c;
}

// 分解数字
void split_num(int n)
{
	for (int i = 0; i < 4; i++) {
	    digits[i] = n % 10;                  // 分离各位数字 
	    n = n / 10;
	}
}

// 6174数字黑洞
void blackhole6174(int n)
{
	cout << n << endl;                        // 输出中间值 
	if (n == 6174) return;                    // 递归结束 
	split_num(n);                             // 分解数字
	sort(digits, digits + 4, greater<int>()); // 从大到小排序 
	int m = calc_diff();                      // 重排求差 
	blackhole6174(m);                         // 重复进行操作 
}

// 入口程序 
int main()
{
	cout << "请输入4位不完全相同的整数：";
	int n; cin >> n;
    blackhole6174(n);
    return 0;
}
