/*
���򣺺�ŵ����Ϸ
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ƶ����� 
void move(int n, char a, char b, char c)
{
	if (n > 0) {
		move(n-1, a, c, b);
		cout << n << ":" << a << "=>" << c << endl;
		move(n-1, b, a, c);
	}
}

// ��ŵ����Ϸ 
int main()
{
	cout << "�����뺺ŵ����������:"; 
	int n; cin >> n;
	move(n, 'A', 'B', 'C');
	return 0;
}

