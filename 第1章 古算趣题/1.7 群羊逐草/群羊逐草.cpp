/*
程序：群羊逐草 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 群羊逐草 
int main()
{
	int x = 1;
	while (true) {
		if (x * (1 + 1 + 1/2.0 + 1/4.0) + 1 == 100) {
			cout << "这群羊一共有" << x << "只" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
