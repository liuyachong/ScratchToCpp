/*
����Ѱ����������
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

// Ѱ����������
int main()
{
    for (int n = 2; n < 100; n++) {
		if (is_prime(n))
			if (is_prime(n + 2))
				cout << "(" << n << "," << n + 2 << ")" << endl;
    }
    return 0;
} 
