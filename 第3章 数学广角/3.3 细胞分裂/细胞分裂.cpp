/*
程序：细胞分裂 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 细胞分裂 
int main()
{
	long long cells = 1;
	long long total = 1;
	for (int i = 0; i < 44; i++) {
		cells = 2 * cells;
		total += cells;
	}
	cout << "细胞数量是" << total << endl; 
	return 0;
}
