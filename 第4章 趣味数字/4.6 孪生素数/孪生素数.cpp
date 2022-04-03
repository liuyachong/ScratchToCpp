/*
程序：寻找孪生素数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断素数
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0)
            return false;
        i++;
    }
}

// 寻找孪生素数
int main()
{
    for (int n = 2; n < 100; n++) {
		if (is_prime(n))
			if (is_prime(n + 2))
				cout << "(" << n << "," << n + 2 << ")" << endl;
    }
    return 0;
} 
