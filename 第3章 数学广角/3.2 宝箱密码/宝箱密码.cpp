/*
程序：宝箱密码 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 宝箱密码 
int main()
{
	int d1, d2, d3, d4, d5, d6;
    for (int n = 800000; n < 900000; n++) { 
        d1 = n % 10;
        d2 = n / 10 % 10;
        d3 = n / 100 % 10;
        d4 = n / 1000 % 10;
        d5 = n / 10000 % 10;
        d6 = n / 100000 % 10;
        if (d4 == 0 and d2 == 4 and d3 == d1)
            if ((d6 * 100 + d5 * 10 + d4) / (d3 * 10.0 + d2) == 35)
                cout << "宝箱密码是" << n << endl;
	}
	return 0;
}
