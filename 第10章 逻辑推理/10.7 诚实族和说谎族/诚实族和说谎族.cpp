/*
���򣺺���� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �жϳ�ʵ���˵���� 
void judge(int a, int b, int c)
{
	int p1 = (a == 1 and a + b + c == 2) or (a == 0 and a + b + c != 2);
	int p2 = (b == 1 and a + b + c == 1) or (b == 0 and a + b + c != 1);
	int p3 = (c == 1 and a + b + c == 1) or (c == 0 and a + b + c != 1);
	if (p1 + p2 + p3 == 3)
		cout << a << b << c << endl;	
}

// ��ʵ���˵����
int main()
{
	for (int a = 0; a <= 1; a++)
		for (int b = 0; b <= 1; b++)
			for (int c = 0; c <= 1; c++)
				judge(a, b, c);
	return 0;
}
