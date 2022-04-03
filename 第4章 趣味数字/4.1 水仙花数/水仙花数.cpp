/*
程序：寻找水仙花数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 寻找水仙花数 
int main()
{
	int n = 100;
	while (n < 1000) {
		int a = n / 100;
		int b = n / 10 % 10;
		int c = n % 10;
	    if (n == a * a * a + b * b * b + c * c * c) {
	    	cout << n << endl;
		}
		n += 1;
	}
    return 0;
}
