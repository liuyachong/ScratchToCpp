/*
����С����Σ���� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// С����Σ���� 
int main()
{
    int speed = 7;     // С���ζ��ٶ�
    int distance = 14; // ̽������С��ĳ�ʼ����
    int detect = 1;    // ̽�����ļ�ⷶΧ
    int fish = 0;      // С���ι��ľ��� 
	
	// С���ν�̽�����ļ�ⷶΧ��
	while (fish < distance - detect) {
		fish += speed;
		speed = speed * 0.98;
	}
	
	// �ж�С���Ƿ����γ�̽�����ļ�ⷶΧ
	if (fish + speed > distance + detect)
		cout << "N" << endl;
	else
		cout << "Y" << endl; 
	 
	return 0;
}
