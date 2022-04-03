/*
程序：是谁闯的祸
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判定是谁闯的祸
void judge(int who)
{
	int a = who == 2;
	int b = who == 4;
	int c = who != 3;
	int d = who != 4;
	if (a + b + c + d == 1)
		cout << who << endl;
}

// 是谁闯的祸
int main()
{
	int who = 1;
	while (who <= 4) {
		judge(who);
		who += 1;
	}
	return 0;
}
