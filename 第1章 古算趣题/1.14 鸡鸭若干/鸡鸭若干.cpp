/*
程序：鸡鸭若干
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 鸡鸭若干 
int main()
{
	int x = 1;
	while (true) {
		int y = x * 2; 
		if (y - 8 == 3 * (x - 6)) {
			cout << "鸡有" << x << "只，鸭有" << y << "只" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
