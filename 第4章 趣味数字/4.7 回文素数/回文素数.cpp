/*
程序：寻找回文素数
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

// 反转数字
int reverse_num(int num)
{
    int reverse = 0;
    while (num > 0) {
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    } 
    return reverse;
}

// 寻找回文素数
int main()
{
    for (int n = 11; n < 200; n++) {
    	if (n == reverse_num(n))
    		if (is_prime(n))
    			cout << n << endl;
    }
    return 0;
} 
