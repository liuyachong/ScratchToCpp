/*
����ȥ����ι� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж�ȥ����ι� 
void judge(int a, int b, int c, int d, int e)
{
    int p1 = a + b == 2 or (a == 0 and b < 2);
    int p2 = b + c < 2;
    int p3 = d + e > 0;
    int p4 = c + d == 2 or c + d == 0;
    int p5 = e + a + d == 3 or (e == 0 and a + d < 3);
	if (p1 + p2 + p3 + p4 + p5 == 5)
		cout << a << b << c << d << e << endl;
}

// ȥ����ι�
int main()
{
	for (int a = 0; a < 2; a++)
		for (int b = 0; b < 2; b++)
			for (int c = 0; c < 2; c++)
				for (int d = 0; d < 2; d++)
					for (int e = 0; e < 2; e++)
						judge(a, b, c, d, e);
	return 0;
}
