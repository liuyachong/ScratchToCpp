/*
����Ѱ�һ�������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж�����
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

// ��ת����
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

// Ѱ�һ�������
int main()
{
    for (int n = 11; n < 200; n++) {
    	if (n == reverse_num(n))
    		if (is_prime(n))
    			cout << n << endl;
    }
    return 0;
} 
