/*
����˭�ǰ���˹������ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж�˭�ǰ���˹������ 
void judge(int who)
{
	int a = who == 7;
	int b = who == 7;
	int c = who == 3;
	int d = who != 3;
	int e = who == 9;
	int f = who != 6 or who != 9;
	int g = who != 6 or who != 9;
	int h = who == 3;
	int i = who == 9;
	if (a + b + c + d + e + f + g + h + i == 4)
		cout << who << endl;
}

// ˭�ǰ���˹������
int main()
{
	int who = 1;
	while (who <= 9) {
		judge(who);
		who += 1;
	}
	return 0;
}
