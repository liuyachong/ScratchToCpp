/*
程序：出门望堤 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 出门望堤 
int main()
{
	int n = 1;
	for (int i = 0; i < 8; i++) { // 依次计算堤、木、枝、巢、禽、雏、毛、颜色的数量
		n = 9 * n;
		cout << n << endl;
	}
    return 0;
}
