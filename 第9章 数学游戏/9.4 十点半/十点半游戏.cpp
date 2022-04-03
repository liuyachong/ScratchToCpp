/*
程序：十点半游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

vector<float> cards; // 存放扑克牌 
float player = 0;    // 记录玩家的点数 
float computer = 0;  // 记录计算机的点数 
int result = 0;      // 对战结果

// 洗牌 
void shuffle_cards()
{
    for (int i = 0; i < 14; i++)
        cards.push_back(0.5);
    
    for (int j = 0; j < 4; j++)
        for (int i = 1; i <= 10; i++)
            cards.push_back(i); 
            
    srand(time(0));
    random_shuffle(cards.begin(), cards.end());
}

// 玩家要牌
void player_hit()
{
    cout << "================玩家要牌=================" << endl;
    player = 0;
    string state = "";
    while (state != "n") {
        cout << "----------------------------------------" << endl;
        cout << "我的点数是：" << player << endl;
        cout << "按 y 发牌，按 n 停牌:";
        cin >> state;
        if (state == "y") {
            float n = cards.back();
            cards.pop_back();
            player += n;
            if (player >= 10.5) {
                state = "n";
                break;
            }
        }
    }
    cout << "我的点数是:" << player << endl;
    if (player == 0)
        player_hit();
}

// 计算机要牌
void computer_hit()
{
    cout << "================计算机要牌=================" << endl;
    computer = 0;
    while (computer < 10.5) {
        float n = cards.back();
        cards.pop_back();
        computer += n;
        if (rand() % 10 + 1 > 7 && computer > 8)
            break; 
    }
    cout << "计算机的点数是:" << computer << endl; 
}

// 判断输赢
void check()
{
    // 双方点数相等则为平局 
    if (player == computer) {
        result = 0;
        return;
    }
    // 某一方点数大于10.5则胜出
    if (player == 10.5) {
        result = 1;
        return;
    }
    if (computer == 10.5) {
        result = 2;
        return;
    }
    // 如果双方同时大于10.5或小于10.5，那么点数大的一方胜出。
    // 否则，点数小的一方胜出。
    result = 2;
    int p1 = player > 10.5 && computer > 10.5;
    int p2 = player < 10.5 && computer < 10.5;
    if (p1 + p2 == 1) {
        if (player > computer)
            result = 1;
    }
    else {
        if (player < computer)
            result = 1;
    }
} 

// 显示结果
void show()
{
    cout << "================对战结果=================" << endl;
    cout << "我 " << player << " VS 计算机 " << computer << endl;
    if (result == 0)
        cout << "打成平手！" << endl;
    else if (result == 1)
        cout << "我赢了！" << endl;
    else
        cout << "计算机赢了！" << endl;
    cout << "========================================" << endl;
}

// 十点半游戏 
int main()
{
    cout << "****************************************" << endl;
    cout << "*             十点半游戏               *" << endl;
    cout << "****************************************" << endl;
    shuffle_cards(); // 洗牌 
    player_hit();    // 玩家要牌 
    computer_hit();  // 计算机要牌 
    check();         // 判断输赢 
    show();          // 显示结果 
    return 0;
}
