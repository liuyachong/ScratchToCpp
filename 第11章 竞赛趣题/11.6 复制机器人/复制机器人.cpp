/*
���򣺸��ƻ����� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ���ƻ����� 
int main()
{
	int n = 1;
	while (true) {
		int new_gen = n;
		int total = n;
		int year = 1;
		while (year <= 10) {
			new_gen = 2 * new_gen - 1;
			total = total + new_gen;
			year += 1;
		}
		if (total >= 14340) {
			cout << "����Ļ���������Ϊ" << n << endl;
			break; 
		}
		n += 1;
	}
	return 0;
}
