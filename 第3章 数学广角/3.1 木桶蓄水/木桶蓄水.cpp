/*
程序：木桶蓄水 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 木桶蓄水 
int main()
{
	int time = 0;
	float barrel = 0;
	while (barrel < 1) {             // 注满水桶
		time += 1;                   // 增加时间
		barrel += (1.0/24 + 1.0/15); // 两个水管同时注水
		barrel -= 1.0/120;           // 小孔放水
		cout << time << ": " << barrel << endl; 
	}
	cout << "注满水桶需要" << time << "分钟" << endl;
	return 0;
}
