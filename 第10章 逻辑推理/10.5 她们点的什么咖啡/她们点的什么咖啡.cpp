/*
程序：她们点的什么咖啡 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断她们点的什么咖啡
void judge(int a, int b, int c)
{
	if ((a + b == 1) or (a + b == 2))
		if (a + c == 1)
			if (not (b + c == 2))
				cout << a << b << c << endl; 
}

// 她们点的什么咖啡
int main()
{
	for (int a = 0; a <= 1; a++)
		for (int b = 0; b <= 1; b++)
			for (int c = 0; c <= 1; c++)
				judge(a, b, c);
	return 0;
}
