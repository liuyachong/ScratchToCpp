/*
程序：寻找金蝉素数
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

// 检测数字
bool is_valid(int num)
{
	vector<int> digits;
	while (num > 0) {
		int d = num % 10;
		int t = count(digits.begin(), digits.end(), d);
		if (t > 0 or d % 2 == 0) // 排除相同的数或偶数
			return false;
		else {
			digits.push_back(d);
			num = num / 10;
		}
	}
	if (digits[2] == 1 or digits[2] == 9) // 保证中间数是素数，即二次脱壳 
		return false;
	return true;
}

// 寻找金蝉素数
int main()
{
	int n = 13579;
	while (n <= 97531) {
		if (is_valid(n) and is_prime(n)) {
			// 判断一次脱壳后是否素数 
			int m = n % 10000;
			m = m / 10;
			if (is_prime(m))
				cout << n << endl;
		}
		n += 2;
	}
    return 0;
} 
