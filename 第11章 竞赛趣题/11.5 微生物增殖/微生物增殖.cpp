/*
����΢������ֳ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ΢������ֳ 
int main()
{
	int x = 10, y = 90, time = 1;
	while (time <= 60) {
		y = y - x;
		if (time % 2 == 0)
			y = y * 2;
		if (time % 3 == 0)
			x = x * 2;
		time += 1; 
	}
	cout << "60min��y��������" << y << endl; 
	return 0;
}
