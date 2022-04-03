/*
程序：早餐搭配 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 早餐搭配 
int main()
{
	string drinks[] = {"豆浆", "牛奶"};
	string foods[] = {"蛋糕", "油条", "饼干", "面包"}; 
	for (int j = 0; j < 2; j++)
		for (int i = 0; i < 4; i++)
			cout << drinks[j] << " + " << foods[i] << endl;
	return 0;
}
