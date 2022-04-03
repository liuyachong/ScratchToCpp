/*
程序：谁是爱丽斯的朋友 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断谁是爱丽斯的朋友 
void judge(int who)
{
	int a = who == 7;
	int b = who == 7;
	int c = who == 3;
	int d = who != 3;
	int e = who == 9;
	int f = who != 6 or who != 9;
	int g = who != 6 or who != 9;
	int h = who == 3;
	int i = who == 9;
	if (a + b + c + d + e + f + g + h + i == 4)
		cout << who << endl;
}

// 谁是爱丽斯的朋友
int main()
{
	int who = 1;
	while (who <= 9) {
		judge(who);
		who += 1;
	}
	return 0;
}
