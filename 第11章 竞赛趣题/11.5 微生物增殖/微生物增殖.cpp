/*
程序：微生物增殖 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 微生物增殖 
int main()
{
	int x = 10, y = 90, time = 1;
	while (time <= 60) {
		y = y - x;
		if (time % 2 == 0)
			y = y * 2;
		if (time % 3 == 0)
			x = x * 2;
		time += 1; 
	}
	cout << "60min后y的数量是" << y << endl; 
	return 0;
}
