/*
程序：三姐妹购物 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断三姐妹各自购买了什么 
void judge(int a, int b, int c)
{
	int p1 = (b != 4) + (c != 2);
	int p2 = (a != 2) + (c != 3);
	int p3 = (a != 1) + (b != 3);
	if (p1 == 1 and p2 == 1 and p3 == 1)
		if (a != b and b != c and c != a)
			cout << a << b << c << endl;
}

// 三姐妹购物
int main()
{
	for (int a = 1; a <= 4; a++)
		for (int b = 1; b <= 4; b++)
			for (int c = 1; c <= 4; c++)
				judge(a, b, c);
	return 0;
}
