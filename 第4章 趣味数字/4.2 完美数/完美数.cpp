/*
程序：寻找完美数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断一个自然数是否完美数
bool is_perfect(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)  // 判断是否因数 
            s += i;      // 累加真因数之和 
    }
    return s == n;       // 真因数之和等于该数自身则是完美数 
} 

// 寻找完美数 
int main()
{
    for (int n = 1; n < 10000; n++) {
        if (is_perfect(n))     // 调用函数判断是否为完美数 
            cout << n << endl; // 输出完美数 
    }
    return 0;
}
