/*
����˭��д�� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж����� 
void judge(int a, int b, int c, int d)
{
	int p1 = a != 2 and a != 3;
	int p2 = (a == 1 and d == 2) or (a != 1 and d != 2);
	int p3 = b == 1 or b != 2;
	int p4 = d == 1 or d != 3;
	int p5 = c != 3 and c != 2;
	if (p1 + p2 + p3 + p4 + p5 == 5)
		cout << a << b << c << d << endl;
}

// ˭��д��
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
