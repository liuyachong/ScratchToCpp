/*
程序：国王发金币
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 国王发金币 
int main()
{
	// 金币总数coins、天数days、每次发放金币数num 
	int coins = 0, days = 0, num = 0;
	while (true) {
		int i = 0;
		while (i < num) {
			coins += num;
			days += 1;
			if (days == 365) {
				cout << coins << endl;
				return 0;
			}
			i += 1; 
		}
		num += 1;
	} 
	return 0;
}
