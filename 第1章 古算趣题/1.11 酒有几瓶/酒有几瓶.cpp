/*
程序：酒有几瓶 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 酒有几瓶 
int main()
{
	int x = 1;
	while (x <= 11) {
		int y = 19 - x; 
		if (3 * x + y / 3 == 33) {
			cout << "醇酒" << x << "瓶，醨酒" << y << "瓶" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
