/*
程序：莱布尼茨级数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std; 
// 莱布尼茨级数 
int main()
{
	cout.precision(15);
    double pi = 0;
	int n = 1, op = 1;
	while (true) {
		pi = pi + op * (4.0 / n);
		cout << n << "\t" << pi << endl;
		op = 0 - op;
		n += 2;
	} 
    return 0;
}
