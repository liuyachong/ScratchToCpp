/*
程序：吉普赛读心术 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 显示读心术图表 
char show_chart()
{
	cout << "=================================================" << endl;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	srand(time(0));
    int pos = rand() % 26;
    char target = alphabet[pos];
    for (int index = 1; index <= 100; index++) {
        if (index % 9 == 0)
            cout << index << ":" << target << "\t";
        else {
            pos = rand() % 26;
            cout << index << ":" << alphabet[pos] << "\t";
        }
        if (index % 6 == 0) cout << endl;
    }
    cout << endl;
    cout << "=================================================" << endl;
    return target;
} 

// 吉普赛读心术游戏 
int main()
{
    cout << "=================================================" << endl;
    cout << "                    吉普赛读心术                 " << endl;
    cout << "=================================================" << endl;
    cout << "从10~99任选一个数，用这个数分别减去它的十位和个数上的数字。" << endl;
    cout << "如你选择68，那就用68-6-8=54。" << endl;
    cout << "然后在下面的字母表中找到54对应的字母，并记在心里。" << endl;
    // 显示图表
    char target = show_chart();
    // 等待用户选择数字
    cout << "输入yes，我就能说出你心里想的：";
    string reply; cin >> reply;
    if (reply == "yes")
        cout << "你心里想的是：" << target << endl;
    else
        cout << "放弃！" << endl;
    return 0;
}
