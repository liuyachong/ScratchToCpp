/*
程序：隔沟算羊 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 隔沟算羊 
int main()
{
	int x = 1;
	while (true) {
		int y = x - 18; 
		if (2 * (y - 9) == x + 9) {
			cout << "甲有羊" << x << "只，乙有羊" << y << "只" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
