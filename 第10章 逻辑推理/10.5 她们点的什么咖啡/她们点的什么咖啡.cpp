/*
�������ǵ��ʲô���� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж����ǵ��ʲô����
void judge(int a, int b, int c)
{
	if ((a + b == 1) or (a + b == 2))
		if (a + c == 1)
			if (not (b + c == 2))
				cout << a << b << c << endl; 
}

// ���ǵ��ʲô����
int main()
{
	for (int a = 0; a <= 1; a++)
		for (int b = 0; b <= 1; b++)
			for (int c = 0; c <= 1; c++)
				judge(a, b, c);
	return 0;
}
