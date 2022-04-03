/*
程序：黑与白 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断诚实族和说谎族 
void judge(int a, int b, int c)
{
	int p1 = (a == 1 and a + b + c == 2) or (a == 0 and a + b + c != 2);
	int p2 = (b == 1 and a + b + c == 1) or (b == 0 and a + b + c != 1);
	int p3 = (c == 1 and a + b + c == 1) or (c == 0 and a + b + c != 1);
	if (p1 + p2 + p3 == 3)
		cout << a << b << c << endl;	
}

// 诚实族和说谎族
int main()
{
	for (int a = 0; a <= 1; a++)
		for (int b = 0; b <= 1; b++)
			for (int c = 0; c <= 1; c++)
				judge(a, b, c);
	return 0;
}
