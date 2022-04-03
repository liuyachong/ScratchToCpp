/*
程序：汉诺塔游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 移动盘子 
void move(int n, char a, char b, char c)
{
	if (n > 0) {
		move(n-1, a, c, b);
		cout << n << ":" << a << "=>" << c << endl;
		move(n-1, b, a, c);
	}
}

// 汉诺塔游戏 
int main()
{
	cout << "请输入汉诺塔盘子数量:"; 
	int n; cin >> n;
	move(n, 'A', 'B', 'C');
	return 0;
}

