/*
���򣺺��������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ����������
int main()
{
    int holes[10]; 
    for (int i = 0; i < 10; i++)
    	holes[i] = 0;              // ÿ������ֵ��Ϊ0
	int num = 0;                   // ���ı��
	int i = 1;
	while (i <= 1000) {
		num = (num + i) % 10;      // �������ÿ�ν����ı��
		if (num == 0)              // �����Ϊ0����10����
			num = 10;
		holes[num-1] = 1;          // ������ֵ��Ϊ1�������������
		i += 1;
	}
	for (int i = 0; i < 10; i++)   // Ϊ0��Ԫ�ر�ʾ����δ�����Ķ�
		cout << holes[i] << ", ";
	cout << endl;
    return 0;
}
