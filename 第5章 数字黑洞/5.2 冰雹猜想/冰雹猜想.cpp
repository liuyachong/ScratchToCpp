/*
程序：冰雹猜想
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 冰雹猜想 
void bingbao(int n)
{
	cout << n << endl;
	if (n > 1) {
		if (n % 2 == 0)
			bingbao(n / 2);
		else
			bingbao(3 * n + 1);
	}
}

// 入口程序 
int main()
{
	cout << "请输入一个正整数："; 
	int n; cin >> n;
	bingbao(n);
    return 0;
}

