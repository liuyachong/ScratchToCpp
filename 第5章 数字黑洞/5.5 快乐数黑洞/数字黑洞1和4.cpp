/*
程序：快乐数黑洞（数字黑洞1和4 ） 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 求平方和
int sum_squares(int n)
{
    int sumsq = 0, d = 0; 
    while (n > 0) {
    	d = n % 10; 
        sumsq += d * d;
        n = n / 10;
    }
    return sumsq;
}

// 分支数字黑洞4
void branch4(int n)
{
    cout << n << endl;
    if (n == 20)
        return;
    int sumsq = sum_squares(n);
    branch4(sumsq);
}

// 数字黑洞1和4 
void blackhole14(int n)
{
	if (n == 4) {
	    branch4(n);
	    return;
	}
	cout << n << endl;
	if (n == 1)
		return;
	int sumsq = sum_squares(n);
	blackhole14(sumsq);
}

// 入口程序 
int main()
{
	cout << "请输入一个非0自然数："; 
	int n; cin >> n;
	blackhole14(n);
    return 0;
}
