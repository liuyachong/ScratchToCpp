/*
���򣺸�������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ���������
int gcd(int a, int b)
{
	int c = 1;
	while (a != b) {
		if (a % 2 == 0 and b % 2 == 0) {
			a = a / 2;
			b = b / 2;
			c = c * 2;
		}
		else {
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
	}
	return b * c;
} 

int main()
{
	int n = gcd(168, 48);
	cout << n << endl;
    return 0;
}
