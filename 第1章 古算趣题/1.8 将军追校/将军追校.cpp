/*
程序：将军追校 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 将军追校 
int main()
{
	int x = 1;
	while (true) {
		if (x / 10 == 320 / 40) {
			cout << "将军再走" << x << "步可追上小校" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
