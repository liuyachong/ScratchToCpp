/*
���������ù��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж������ø��Թ�����ʲô 
void judge(int a, int b, int c)
{
	int p1 = (b != 4) + (c != 2);
	int p2 = (a != 2) + (c != 3);
	int p3 = (a != 1) + (b != 3);
	if (p1 == 1 and p2 == 1 and p3 == 1)
		if (a != b and b != c and c != a)
			cout << a << b << c << endl;
}

// �����ù���
int main()
{
	for (int a = 1; a <= 4; a++)
		for (int b = 1; b <= 4; b++)
			for (int c = 1; c <= 4; c++)
				judge(a, b, c);
	return 0;
}
