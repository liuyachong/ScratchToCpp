/*
程序：日行几里 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 日行几里 
int main()
{
	int n = 1, t = 1;                            // 份数n、总份数t 
	for (int i = 0; i < 5; i++) {                // 求总份数
		n = 2 * n;
		t += n;
	}
	int d = 378 * (16.0 / t);                    // 计算第2天的路程
	cout << "第2天走了" << d << "里路" << endl; 
    return 0;
}
