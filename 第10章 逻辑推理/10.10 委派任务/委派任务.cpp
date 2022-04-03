/*
程序：她们在做什么 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断谁去执行任务 
void judge(int a, int b, int c, int d, int e, int f)
{
	int p1 = a + b > 0;
	int p2 = a + d != 2;
	int p3 = a + e + f == 2;
	int p4 = b + c == 0 or b + c == 2;
	int p5 = c + d == 1;
	int p6 = d + e == 0 or d == 1;
	if (p1 + p2 + p3 + p4 + p5 + p6 == 6)
		cout << a << b << c << d << e << f << endl;
}

// 委派任务 
int main()
{
	for (int a = 0; a < 2; a++)
		for (int b = 0; b < 2; b++)
			for (int c = 0; c < 2; c++)
				for (int d = 0; d < 2; d++)
					for (int e = 0; e < 2; e++)
						for (int f = 0; f < 2; f++)
							judge(a, b, c, d, e, f);
	return 0;
}
