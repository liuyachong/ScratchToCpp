/*
程序：验证哥德巴赫猜想 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断素数 
bool is_prime(int n)
{
	int i = 2;
	while (i * i <= n) {
		if (n % i == 0)
			return false;
		i += 1;
	} 
	return true;
}

// 验证哥德巴赫猜想 
void check(int n)
{
	int j = 2;
	while (j < n) {
		// 将一个偶数分解为两个数，并判断是否为素数
		if (is_prime(j) and is_prime(n-j)) {
			cout << n << " = " << j << " + " << n-j << endl;
			break;
		}
		j += 1; 
	} 
}

// 主程序 
int main()
{
	int n = 4;
	while (n < 1000) {
		check(n);
		n += 2;
	} 
    return 0;
}
