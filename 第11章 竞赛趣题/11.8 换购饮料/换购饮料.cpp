/*
程序：换购饮料
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 换购饮料
int main()
{
    int bottles;
    cout << "请输入开始买了多少瓶饮料：";
    cin >> bottles;
    int caps = bottles;
    while (caps >= 3) {
        int exchange = caps / 3;
        caps = exchange + caps % 3;
        bottles += exchange; 
    }
    cout << "一共能喝" << bottles << "瓶饮料" << endl;
    return 0;
}
