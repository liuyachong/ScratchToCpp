/*
������������ʲô 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж�˭ȥִ������ 
void judge(int a, int b, int c, int d, int e, int f)
{
	int p1 = a + b > 0;
	int p2 = a + d != 2;
	int p3 = a + e + f == 2;
	int p4 = b + c == 0 or b + c == 2;
	int p5 = c + d == 1;
	int p6 = d + e == 0 or d == 1;
	if (p1 + p2 + p3 + p4 + p5 + p6 == 6)
		cout << a << b << c << d << e << f << endl;
}

// ί������ 
int main()
{
	for (int a = 0; a < 2; a++)
		for (int b = 0; b < 2; b++)
			for (int c = 0; c < 2; c++)
				for (int d = 0; d < 2; d++)
					for (int e = 0; e < 2; e++)
						for (int f = 0; f < 2; f++)
							judge(a, b, c, d, e, f);
	return 0;
}
