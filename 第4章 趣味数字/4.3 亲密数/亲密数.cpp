/*
程序：寻找亲密数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 求一个数的真因数之和
int factors_sum(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)  // 判断是否因数 
            s += i;      // 累加真因数之和 
    }
    return s;
} 

// 寻找亲密数 
int main()
{
    for (int a = 1; a < 2000; a++) {
        int b = factors_sum(a);
        if (a < b) {
            int bs = factors_sum(b);
            if (bs == a)
                cout << "(" << a << "," << b << ")" << endl;
        }
    }
    return 0;
}
