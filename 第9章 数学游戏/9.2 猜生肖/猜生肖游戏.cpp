/*
程序：猜生肖游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 猜生肖游戏 
int main()
{
    string animals[] = {"鼠", "牛", "虎", "兔", "龙", "蛇",
                        "马", "羊", "猴", "鸡", "狗", "猪"};
    map<int, string> questions;
    questions[1] = "鼠，虎，龙，马，猴，狗";
    questions[2] = "牛，虎，蛇，马，鸡，狗";
    questions[4] = "兔，龙，蛇，马，猪";
    questions[8] = "羊，猴，鸡，狗，猪";
    int answer = 0;
    
    cout << "************************************" << endl;
    cout << "*               猜生肖             *" << endl;
    cout << "************************************" << endl;
    for (int n = 1; n <= 8; n = n * 2) {
        cout << "------------------------------------" << endl;
        cout << questions[n] << endl;
        cout << "------------------------------------" << endl;
        cout << "请问上面有你的生肖吗？请输入(y/n):";
        string input;
        cin >> input;
        if (input == "y")
            answer += n;
    }
    
    cout << "================结果================" << endl;
    if (1 <= answer && answer <= 12)
        cout << "你的生肖是：" << animals[answer-1] << endl;
    else
        cout << "选择不正确，系统无法判断你的生肖。";
    cout << "====================================" << endl;
    return 0;
}
