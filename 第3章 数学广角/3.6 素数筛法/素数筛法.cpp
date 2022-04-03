/*
程序：素数筛法 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 素数筛法 
void find_primes(int n)
{
	// 生成2到n之间数表 
	vector<int> primes;
	for (int i = 2; i < n; i++)    
		primes.push_back(i);
	// 根据埃拉托色尼筛法删除合数 
	int p = 0, j = 0;
	while (p * p <= n) {
		p = primes[j];
		int i = j + 1;
		while (i < primes.size()) {
			if (primes[i] % p == 0)
				primes.erase(primes.begin() + i);
			else
				i += 1;
		}
		j += 1;
	}
	// 输出素数表
	for (int i = 0; i < primes.size(); i++)
		cout << primes[i] << ", ";
} 

int main()
{
	int n = 1000;   // 设定筛选的最大数 
	find_primes(n); // 筛选素数
    return 0;
}
