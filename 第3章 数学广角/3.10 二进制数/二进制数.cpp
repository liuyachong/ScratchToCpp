/*
程序：二进制数 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 二进制数 
int main()
{
	cout << "请输入一个十进制整数：";
	int decimal; cin >> decimal;
	string binary;
	if (decimal == 0)
		binary = "0";
	else {
		binary = "";
		while (decimal > 0) {
			int remainder = decimal % 2;
			binary = (char)(remainder + 48) + binary;
			decimal = decimal / 2;
		}
	}
	binary = "0b" + binary;
	cout << binary << endl;
    return 0;
}
