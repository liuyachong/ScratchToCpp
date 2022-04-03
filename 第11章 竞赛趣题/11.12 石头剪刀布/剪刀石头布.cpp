/*
程序：剪刀石头布 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 比较大小 
string compare(int a, int b)
{
	string r = "";
	if (a + b == 5)
		r = a < b ? "a" : "b";
	if ((a + b == 7) or (a + b == 2))
		r = a > b ? "a" : "b";
	return r;
}

// 剪刀石头布
int main()
{
	int series_a[3] = {5, 2, 0};    // 小A的出拳规律 
	int series_b[4] = {5, 0, 5, 2}; // 小B的出拳规律 
    int boy_a = 0, boy_b = 0;       // 小A和小B赢的次数 
    int i = 0;
    while (i < 10) {
        int a = series_a[i % 3];
        int b = series_b[i % 4];
        string r = compare(a, b);
        if (r == "a")
            boy_a += 1;
        if (r == "b")
            boy_b += 1;
        i += 1;
    }
    cout << boy_a << " : " << boy_b << endl;
	return 0;
}
