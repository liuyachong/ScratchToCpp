/*
����ϸ������ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ϸ������ 
int main()
{
	long long cells = 1;
	long long total = 1;
	for (int i = 0; i < 44; i++) {
		cells = 2 * cells;
		total += cells;
	}
	cout << "ϸ��������" << total << endl; 
	return 0;
}
