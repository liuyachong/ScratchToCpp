/*
程序：将军射鹿 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断射鹿将军 
void judge(int who)
{
    int a = who == 1 or who == 3;
    int b = who != 5;
    int c = who == 4 or who == 2;
    int d = who != 4 and who != 2;
    int e = who != 3 and who != 1;
	if (a + b + c + d + e == 2)
		cout << who << endl;
}

// 将军射鹿 
int main()
{
	int who = 1;
	while (who <= 5) {
		judge(who);
		who += 1;
	}
	return 0;
}
