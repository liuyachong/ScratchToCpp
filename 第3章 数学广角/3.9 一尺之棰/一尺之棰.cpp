/*
程序：一尺之棰 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 一尺之棰
int main()
{
	cout.precision(16);
	long long n = 1;
	double s = 0;
	while (s < 1) {
		n = 2 * n;
		s += 1.0/n;
		cout << "1/" << n << " : " << s << endl;
	}
	return 0;
}
