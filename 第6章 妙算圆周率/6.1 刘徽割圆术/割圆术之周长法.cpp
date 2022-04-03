/*
程序：割圆术之周长法
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std; 
// 割圆术之周长法 
int main()
{
	cout.precision(16);
	int n = 6;
	while (n <= 3072) {
		double pi = sin(M_PI/n) * n;
		cout << n << "\t" << pi << endl;
		n += 2;
	} 
    return 0;
}
