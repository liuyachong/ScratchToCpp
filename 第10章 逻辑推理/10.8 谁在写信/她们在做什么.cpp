/*
������������ʲô 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж���������ʲô
void judge(int a, int b, int c, int d)
{
	int p1 = a != 1 and a != 4;
	int p2 = b != 1 and b != 3;
	int p3 = (a == 3 and d == 1) or (a != 3 and d != 1);
	int p4 = c != 1 and c != 4;
	int p5 = d != 3 and d != 4;
	if (p1 + p2 + p3 + p4 + p5 == 5)
		cout << a << b << c << d << endl;
}

// ��������ʲô
int main()
{
	for (int a = 1; a <= 4; a++)
		for (int b = 1; b <= 4; b++)
			for (int c = 1; c <= 4; c++) {
				int d = 10 - a - b - c;
				int arr[] = {a, b, c, d};
				set<int> myset(arr, arr + 4);
				if (myset.size() == 4)
					judge(a, b, c, d);
				}
	return 0;
}
