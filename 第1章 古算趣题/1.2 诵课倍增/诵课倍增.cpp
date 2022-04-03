/*
程序：诵课倍增 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 诵课倍增 
int main()
{
	int n = 1, t = 1;                  // 份数n、总份数t 
	for (int i = 0; i < 2; i++) {      // 求总份数
		n = 2 * n;
		t += n;
	}
	
	n = 1;
	for (int i = 1; i <= 3; i++) {     // 计算各天阅读的字数 
		int x = 34685 * n / t;
		cout << "第" << i << "天读了" << x << "字" << endl; 
		n = 2 * n;
	}
    return 0;
}
