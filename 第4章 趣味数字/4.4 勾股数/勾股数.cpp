/*
程序：寻找勾股数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 寻找勾股数 
int main()
{
    for (int a = 3; a < 100; a++) {
    	for (int b = a + 1; b < 100; b++) {
			for (int c = b + 1; c < 100; c++) {
				if (a * a + b * b == c * c)
					cout << a << "," << b << "," << c << endl;
			}
		}	
    }
    return 0;
}
