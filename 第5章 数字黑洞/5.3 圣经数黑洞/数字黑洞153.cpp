/*
����ʥ�����ڶ���153���ֺڶ��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ʥ�����ڶ� 
void blackhole153(int n)
{
	cout << n << endl;
	if (n == 153)
		return;
	// ���λ���ֵ������� 
	int s = 0;
	while (n > 0) {
		int d = n % 10;
		s += d * d * d;
		n = n / 10;
	}
	// �������� 
	blackhole153(s);
}

// ��ڳ��� 
int main()
{
	cout << "������һ��3�ı�����������"; 
	int n; cin >> n;
	if (n % 3 == 0)
		blackhole153(n);
	else
		cout << "������3�ı�����" << endl;
    return 0;
}
