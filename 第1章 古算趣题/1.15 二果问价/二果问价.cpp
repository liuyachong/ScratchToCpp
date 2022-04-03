/*
程序：二果问价
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 二果问价 
int main()
{
	int x = 1;
	while (true) {
		int y = 1000 - x; 
		if (11 * x / 9 + 4 * y / 7 == 999) {
			int xm = 11 * x / 9;
			int ym = 4 * y / 7;
			cout << "买了甜果" << x << "个，花了" << xm << "文钱" << endl;
			cout << "买了苦果" << y << "个，花了" << ym << "文钱" << endl;
			break;
		}
		x += 1;
	}
    return 0;
}
