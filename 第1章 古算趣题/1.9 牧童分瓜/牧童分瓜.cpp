/*
程序：牧童分瓜 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 牧童分瓜 
int main()
{
	int x = 1;
	while (true) {
		int y = 13 * x + 15; 
		if (y == 16 * x - 18) {
			cout << "牧童" << x << "人，瓜" << y << "个" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
