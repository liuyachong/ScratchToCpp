/*
程序：验证尼科彻斯定理
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 验证尼科彻斯定理 
void check(int n)
{
	int cube = n * n * n;
	int a = 1;
	while (a <= cube) {
		// 生成连续奇数序列 
		vector<int> odd_numbers;
		for (int b = a; b < a + 2 * n; b+=2)
			odd_numbers.push_back(b);
		// 对序列求和 
		int s = accumulate(odd_numbers.begin(), odd_numbers.end(), 0);
		if (s == cube) {
			// 输出序列 
		    for (int i = 0; i < odd_numbers.size(); i++)
		        cout << odd_numbers[i] << ",";
		    break;
		}
		a += 2;
	}
} 

// 主程序 
int main()
{
	cout << "请输入一个自然数：";
	int n; cin >> n;
    check(n);
    return 0;
} 
