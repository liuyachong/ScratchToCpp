/*
������˭���Ļ�
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж���˭���Ļ�
void judge(int who)
{
	int a = who == 2;
	int b = who == 4;
	int c = who != 3;
	int d = who != 4;
	if (a + b + c + d == 1)
		cout << who << endl;
}

// ��˭���Ļ�
int main()
{
	int who = 1;
	while (who <= 4) {
		judge(who);
		who += 1;
	}
	return 0;
}
