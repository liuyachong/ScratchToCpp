/*
����Ѱ��÷ɭ����
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

// Ѱ��÷ɭ����
int main()
{
    for (int p = 2; p < 21; p++) {
        int m = pow(2, p) - 1;
        if (is_prime(m))
            cout << p << ", " << m << endl;
    }
    return 0;
}
