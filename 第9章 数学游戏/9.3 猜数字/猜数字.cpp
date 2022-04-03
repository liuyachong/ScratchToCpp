/*
程序：猜数字游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 猜数字游戏 
void guess_number()
{
	srand(time(0));
	int num = rand() % 100 + 1;
	int guess = 0;
	while (guess != num) {
		cout << "请输入要猜的数字：";
		cin >> guess;
		if (guess > num)
			cout << "大了！" << endl;
		if (guess < num)
			cout << "小了！" << endl; 
	}
	cout << "对了！" << endl;
}

int main()
{
	guess_number();
	return 0;
}

