/*
程序：谁在写信 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断做事 
void judge(int a, int b, int c, int d)
{
	int p1 = a != 2 and a != 3;
	int p2 = (a == 1 and d == 2) or (a != 1 and d != 2);
	int p3 = b == 1 or b != 2;
	int p4 = d == 1 or d != 3;
	int p5 = c != 3 and c != 2;
	if (p1 + p2 + p3 + p4 + p5 == 5)
		cout << a << b << c << d << endl;
}

// 谁在写信
int main()
{
	for (int a = 1; a <= 4; a++)
		for (int b = 1; b <= 4; b++)
			for (int c = 1; c <= 4; c++) {
				int d = 10 - a - b - c;
				int arr[] = {a, b, c, d};
				set<int> myset(arr, arr + 4);
				if (myset.size() == 4)
					judge(a, b, c, d);
				}
	return 0;
}
