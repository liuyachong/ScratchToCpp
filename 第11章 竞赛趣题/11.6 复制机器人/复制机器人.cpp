/*
程序：复制机器人 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 复制机器人 
int main()
{
	int n = 1;
	while (true) {
		int new_gen = n;
		int total = n;
		int year = 1;
		while (year <= 10) {
			new_gen = 2 * new_gen - 1;
			total = total + new_gen;
			year += 1;
		}
		if (total >= 14340) {
			cout << "最初的机器人数量为" << n << endl;
			break; 
		}
		n += 1;
	}
	return 0;
}
