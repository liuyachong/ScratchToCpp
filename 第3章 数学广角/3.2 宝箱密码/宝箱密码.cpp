/*
���򣺱������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �������� 
int main()
{
	int d1, d2, d3, d4, d5, d6;
    for (int n = 800000; n < 900000; n++) { 
        d1 = n % 10;
        d2 = n / 10 % 10;
        d3 = n / 100 % 10;
        d4 = n / 1000 % 10;
        d5 = n / 10000 % 10;
        d6 = n / 100000 % 10;
        if (d4 == 0 and d2 == 4 and d3 == d1)
            if ((d6 * 100 + d5 * 10 + d4) / (d3 * 10.0 + d2) == 35)
                cout << "����������" << n << endl;
	}
	return 0;
}
