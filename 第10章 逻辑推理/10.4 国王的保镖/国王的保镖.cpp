/*
程序：谁击中了杀手 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断谁击中了杀手 
void judge(int who)
{
	int a = who == 8 or who == 6;
	int b = who == 2;
	int c = who == 7;
	int d = who != 2;
	int e = not (who == 8 or who == 6);
	int f = not (who == 8 or who == 6);
	int g = who != 3;
	int h = who == 8 or who == 6;
	if (a + b + c + d + e + f + g + h == 3)
		cout << who << endl;
}

// 国王的保镖 
int main()
{
	int who = 1;
	while (who <= 8) {
		judge(who);
		who += 1;
	}
	return 0;
}
