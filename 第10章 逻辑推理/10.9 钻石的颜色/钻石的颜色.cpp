/*
������ʯ����ɫ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж���ʯ����ɫ
void judge(int box1, int box2, int box3, int box4, int box5)
{
	int a = (box2 == 5) + (box3 == 4);
	int b = (box2 == 2) + (box4 == 1);
	int c = (box1 == 1) + (box5 == 3);
	int d = (box3 == 2) + (box4 == 3);
	int e = (box2 == 4) + (box5 == 5);
	if (a == 1 and b == 1 and c == 1 and d == 1 and e == 1)
		cout << box1 << box2 << box3 << box4 << box5 << endl;
}

// ��ʯ����ɫ
int main()
{
	for (int box1 = 1; box1 <= 6; box1++)
		for (int box2 = 1; box2 <= 6; box2++)
			for (int box3 = 1; box3 <= 6; box3++)
				for (int box4 = 1; box4 <= 6; box4++) {
					int box5 = 15 - box1 - box2 - box3 - box4;
					judge(box1, box2, box3, box4, box5);
				}
	return 0;
}
