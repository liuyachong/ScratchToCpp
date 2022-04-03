/*
程序：常胜将军游戏（取火柴） 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;
// 全局变量 
int total = 0; // 火柴总数
int limit = 0; // 每次取火柴的限量

// 设定规则
void set_rule()
{
    cout << "================设定规则=================" << endl;
    while (limit < 2) {
        cout << "请输入每次最多取多少根火柴(如2,3,4…):";
        cin >> limit;
        if (limit < 2)
            cout << "每次最多取火柴数不能小于2" << endl;
    }
    
    while (total <= limit) {
        cout << "请输入火柴的总数(如15,18,21…):";
        cin >> total;
        if (total <= limit)
            cout << "火柴的总数必须大于" << limit << endl;
    }
    
    cout << "================游戏规则=================" << endl;
    cout << "一堆火柴有" << total << "根，二人轮流取火柴，" << endl;
    cout << "每次可取走1～" << limit << "根，取走最后一根的获胜。" << endl; 
}

// 玩家取火柴
void player_take()
{
    cout << "----------------玩家取火柴---------------" << endl;
    int n = 0;
    while (n <= 0) {
        cout << "提示：建议取" << total % (limit + 1) << endl;
        cout << "请输入取火柴的数目:";
        cin >> n;
        if (n < 1 || n > limit)
            n = 0;
        if (n > total)
            n = 0;
        total = total - n;
        cout << "还剩下火柴" << total << "根" << endl; 
    }
}

// 计算机取火柴
void computer_take()
{
    cout << "---------------计算机取火柴--------------" << endl;
    srand(time(0));
    int n = total % (limit + 1);
    if (n == 0)
        n = rand() % limit + 1;
    total = total - n;
    cout << "计算机取走" << n << "根" << endl;
    cout << "还剩下火柴" << total << "根" << endl; 
}

// 主程序 
int main()
{
    cout << "****************************************" << endl;
    cout << "*               取火柴游戏             *" << endl;
    cout << "****************************************" << endl;
    set_rule();
    cout << "================开始游戏================" << endl;
    while (total > 0) {
        player_take();
        if (total == 0) {
        	cout << "================对战结果=================" << endl;
            cout << "你赢了，计算机输了！" << endl;
        }
        else {
            computer_take();
            if (total == 0) {
            	cout << "================对战结果=================" << endl;
                cout << "计算机赢了，你输了！" << endl;
            }
        }
    }
    return 0;
}
