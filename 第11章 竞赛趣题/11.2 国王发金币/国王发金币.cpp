/*
���򣺹��������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ��������� 
int main()
{
	// �������coins������days��ÿ�η��Ž����num 
	int coins = 0, days = 0, num = 0;
	while (true) {
		int i = 0;
		while (i < num) {
			coins += num;
			days += 1;
			if (days == 365) {
				cout << coins << endl;
				return 0;
			}
			i += 1; 
		}
		num += 1;
	} 
	return 0;
}
