/*
程序：抢十八游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

int target = 18;   // 要抢的目标数 
int count_num = 0; // 计数器，记录玩家或电脑的当前报数  

// 玩家报数
void player_say()
{
    cout << "=================玩家报数================" << endl;
    int num = 0;
    while (num <= 0) {
	    cout << "提示：建议报" << (target - count_num) % 3 << endl;
	    cout << "请报1或2：";
	    cin >> num;
	    if (num < 1 || num > 2) { 
		    cout << "请重新报数！" << endl;
		    num = 0; 
		}
		if (num + count_num > target) {
		    cout << "请重新报数！" << endl;
		    num = 0; 
		}
	}
	count_num = count_num + num;
	cout << "玩家报数：" << count_num << endl;
} 

// 计算机报数
void computer_say()
{
    cout << "================计算机报数===============" << endl;
	int num = (target - count_num) % 3;
    if (num == 0)
        num = rand() % 2 + 1;
        
	count_num = count_num + num;
	cout << "计算机报数：" << count_num << endl;
}
 
// 主程序 
int main()
{
	cout << "****************************************" << endl;
    cout << "*                抢十八游戏             *" << endl;
    cout << "****************************************" << endl;
    // 计算机或玩家随机由一方开始报数
    srand(time(0));
	if (rand() % 10 + 1 > 5)
	    computer_say();
	
	while (count_num != target) {
	    player_say();
	    if (count_num == target) { 
	    	cout << "===================结果==================" << endl;
	        cout << "你赢了！" << endl;
	    }
		else {
		    computer_say();
		    if (count_num == target) {
		    	cout << "===================结果==================" << endl;
		        cout << "计算机赢了！" << endl;
		    }
		} 
	}
    return 0;
}
