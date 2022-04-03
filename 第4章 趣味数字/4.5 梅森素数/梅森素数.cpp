/*
程序：寻找梅森素数
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断素数
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0)
            return false;
        i++;
    }
}

// 寻找梅森素数
int main()
{
    for (int p = 2; p < 21; p++) {
        int m = pow(2, p) - 1;
        if (is_prime(m))
            cout << p << ", " << m << endl;
    }
    return 0;
}
