/*
���򣺽�����¹ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж���¹���� 
void judge(int who)
{
    int a = who == 1 or who == 3;
    int b = who != 5;
    int c = who == 4 or who == 2;
    int d = who != 4 and who != 2;
    int e = who != 3 and who != 1;
	if (a + b + c + d + e == 2)
		cout << who << endl;
}

// ������¹ 
int main()
{
	int who = 1;
	while (who <= 5) {
		judge(who);
		who += 1;
	}
	return 0;
}
