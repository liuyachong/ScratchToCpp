/*
程序：千钱百鸡
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 千钱百鸡 
int main()
{
	for (int x = 1; x < 21; x++) {
		for (int y = 1; y < 34; y++) {
			int z = 100 - x - y;
			if (x * 50 + y * 30 + z * 10 / 3 == 1000)
				cout << x << ", " << y << ", " << z << endl;
		}
	}
    return 0;
}
