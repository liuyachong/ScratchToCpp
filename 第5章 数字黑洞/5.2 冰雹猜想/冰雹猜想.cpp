/*
���򣺱�������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �������� 
void bingbao(int n)
{
	cout << n << endl;
	if (n > 1) {
		if (n % 2 == 0)
			bingbao(n / 2);
		else
			bingbao(3 * n + 1);
	}
}

// ��ڳ��� 
int main()
{
	cout << "������һ����������"; 
	int n; cin >> n;
	bingbao(n);
    return 0;
}

