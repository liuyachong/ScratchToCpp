/*
程序：黑与白 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断黑与白 
void judge(int a, int b, int c, int d, int e)
{
	int p1 = (a == 1 and b+c+d+e == 3) or (a == 0 and b+c+d+e != 3);
	int p2 = (b == 1 and a+c+d+e == 0) or (b == 0 and a+c+d+e != 0);
	int p3 = (c == 1 and a+b+d+e == 1) or (c == 0 and a+b+d+e != 1);
	int p4 = (d == 1 and a+b+c+e == 4) or (d == 0 and a+b+c+e != 4);
	if (p1 + p2 + p3 + p4 == 4)
		cout << a << b << c << d << e << endl;	
}

// 黑与白
int main()
{
	for (int a = 0; a <= 1; a++)
		for (int b = 0; b <= 1; b++)
			for (int c = 0; c <= 1; c++)
				for (int d = 0; d <= 1; d++)
					for (int e = 0; e <= 1; e++)
						judge(a, b, c, d, e);
	return 0;
}
