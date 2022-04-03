/*
程序：古堡算式 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断一个数是否有重复数字 
bool no_repeat(int n)
{
	stringstream ss; ss << n;
	string num_str; ss >> num_str;
	set<char> myset;
	for (int i = 0; i < num_str.size(); i++) {
		myset.insert(num_str[i]);
	}
	return myset.size() == 5;
}

// 反转数字 
int reverse_num(int n)
{
	stringstream ss; ss << n;
	string num_str; ss >> num_str;
	reverse(num_str.begin(), num_str.end());
	ss.clear(); ss << num_str;
	int num; ss >> num;
	return num;
}

// 古堡算式 
int main()
{
	int n = 12345;
	while (n < 98765) {
		if (no_repeat(n)) {         // 判断是否5位数字是否重复 
			int p = reverse_num(n); // 反转数字
			if (p % n == 0)         // 能整除则找到答案 
				cout << n;
		}
		n += 1;
	}
    return 0;
}
