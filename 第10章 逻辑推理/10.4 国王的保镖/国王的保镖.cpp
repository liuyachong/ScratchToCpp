/*
����˭������ɱ�� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж�˭������ɱ�� 
void judge(int who)
{
	int a = who == 8 or who == 6;
	int b = who == 2;
	int c = who == 7;
	int d = who != 2;
	int e = not (who == 8 or who == 6);
	int f = not (who == 8 or who == 6);
	int g = who != 3;
	int h = who == 8 or who == 6;
	if (a + b + c + d + e + f + g + h == 3)
		cout << who << endl;
}

// �����ı��� 
int main()
{
	int who = 1;
	while (who <= 8) {
		judge(who);
		who += 1;
	}
	return 0;
}
