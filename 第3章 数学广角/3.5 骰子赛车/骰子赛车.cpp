/*
������������ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �������� 
int main()
{
	srand(time(0));
	int car_a = 0, car_b = 0;
	for (int i = 0; i < 100; i++) {
		int dice1 = rand() % 6 + 1;
		int dice2 = rand() % 6 + 1;
		int dice_sum = dice1 + dice2;
		if (4 < dice_sum and dice_sum < 10)
			car_a += 1;
		else
			car_b += 1;
	}
	cout << car_a << ", " << car_b << endl; 
    return 0;
}
