/*
程序：雯雯摘苹果 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 雯雯摘苹果 
int main()
{
	int apple[] = {100, 200, 150, 140, 129, 134, 167, 198, 200, 99};
	int vit = 10, num = 0, i = 0;  // 力气vit、采摘数num、计数器i 
	while (i < 10) {
		if (apple[i] <= 110) {     // 伸手摘苹果 
			if (vit > 1) {
				vit -= 2;
				num += 1;
			}
		}
		else if (apple[i] < 140) {  // 站到凳子上摘苹果 
			if (vit > 2) {
				vit -= 3;
				num += 1;
			}
		}
		i += 1;
	}
	cout << "摘到" << num << "个苹果" << endl;
	return 0;
}
