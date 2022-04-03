/*
程序：浮屠增级 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 浮屠增级 
int main()
{
	int n = 1, t = 1;                  // 份数n、总份数t 
	for (int i = 0; i < 6; i++) {      // 求总份数
		n = 2 * n;
		t += n;
	}
	int d = 381 / t * 1;               // 计算顶层灯数
	cout << "顶层有" << d << "盏灯"; 
    return 0;
}
