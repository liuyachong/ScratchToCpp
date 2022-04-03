/*
程序：客有几人 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 客有几人 
int main()
{
	int x = 1;
	while (x <= 65) {
		if (x / 2 + x / 3 + x / 4 == 65) {
			cout << "客有" << x << "人" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
