/*
���������ߵ����� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �����ߵ����� 
int main()
{
    int mp = 39;        // ħ��ֵ
    int distance = 200; // ��������
    int time = 9;       // ��ûʱ��
    int a = 0;          // �����ߵ��ƶ�����
    int b = 0;          // ��˸�������ƶ�����
    int i = 1;
    while (i <= time) {
        a += 17;        // �����ߵ��ܲ��ٶ�Ϊ17m/s
        if (mp > 9) {
            mp -= 10;   // ÿ��ʹ����˸��������ħ��ֵ10��
            b += 60;    // ����˸�������ƶ��ٶ�Ϊ60m/s
    	}
		else
            mp += 4;    // ħ��ֵ�Ļָ��ٶ�Ϊ4��/s
        if (b > a)
            a = b;
        if (a >= distance) {
        	cout << "Yes, " << i << endl;
            return 0;
        }
        i += 1;
    }
    cout << "No, " << a << endl;
	return 0;
}
