/*
����ľͰ��ˮ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ľͰ��ˮ 
int main()
{
	int time = 0;
	float barrel = 0;
	while (barrel < 1) {             // ע��ˮͰ
		time += 1;                   // ����ʱ��
		barrel += (1.0/24 + 1.0/15); // ����ˮ��ͬʱעˮ
		barrel -= 1.0/120;           // С�׷�ˮ
		cout << time << ": " << barrel << endl; 
	}
	cout << "ע��ˮͰ��Ҫ" << time << "����" << endl;
	return 0;
}
