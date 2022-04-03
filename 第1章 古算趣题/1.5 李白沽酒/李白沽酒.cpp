/*
程序：李白沽酒 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 李白沽酒 
int main()
{
	float n = 0;                  // 酒量 
	for (int i = 0; i < 4; i++) { // 反推瓶内酒量 
		n = (n + 6) / 2;
	}
	cout << "瓶内原有酒" << n << "升" << endl;
    return 0;
}
