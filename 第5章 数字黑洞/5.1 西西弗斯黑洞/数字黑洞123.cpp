/*
程序：西西弗斯黑洞（123数字黑洞） 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 西西弗斯黑洞 
void blackhole123(string n)
{
	cout << n << endl;
	if (n == "123")
		return;
	int total = n.length();
	int even = 0, odd = 0, i = 0;
	while (i < total) {
		if ((n[i] - 48) % 2 == 0)
			even += 1;
		else
			odd += 1;
		i += 1;
	}
	stringstream ss; ss << even << odd << total;
	string m; ss >> m;
	blackhole123(m);
}

// 入口程序 
int main()
{
	cout << "请输入任意一串数字："; 
	string n; cin >> n;
	blackhole123(n);
    return 0;
}

