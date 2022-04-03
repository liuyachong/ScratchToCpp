/*
程序：红灯几盏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 红灯几盏 
int main()
{
	int x = 1;
	while (true) {
	    if (x % 3 == 0 and x % 5 == 4 and x % 7 == 6) {
	    	cout << "有灯笼" << x << "盏" << endl;
	    	break;
		}
		x += 1;
	}
    return 0;
}
