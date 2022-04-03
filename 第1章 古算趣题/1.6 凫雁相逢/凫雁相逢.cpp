/*
程序：凫雁相逢 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 凫雁相逢 
int main()
{
	int d = 0;                   // 天数 
	float n = 0;                 // 行程 
	while (n < 1) {              // 不小于1则为凫雁相逢
		d += 1;                  // 累加凫雁飞行的天数
		n += 1.0 / 7 + 1.0 / 9;  // 累加凫雁飞行的距离
	}
	cout << "凫雁在第" << d << "天相逢" << endl;
    return 0;
}
