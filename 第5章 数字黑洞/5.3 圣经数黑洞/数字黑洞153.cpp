/*
程序：圣经数黑洞（153数字黑洞） 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 圣经数黑洞 
void blackhole153(int n)
{
	cout << n << endl;
	if (n == 153)
		return;
	// 求各位数字的立方和 
	int s = 0;
	while (n > 0) {
		int d = n % 10;
		s += d * d * d;
		n = n / 10;
	}
	// 反复操作 
	blackhole153(s);
}

// 入口程序 
int main()
{
	cout << "请输入一个3的倍数的整数："; 
	int n; cin >> n;
	if (n % 3 == 0)
		blackhole153(n);
	else
		cout << "请输入3的倍数！" << endl;
    return 0;
}
