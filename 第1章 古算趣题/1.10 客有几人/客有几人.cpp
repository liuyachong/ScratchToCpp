/*
���򣺿��м��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ���м��� 
int main()
{
	int x = 1;
	while (x <= 65) {
		if (x / 2 + x / 3 + x / 4 == 65) {
			cout << "����" << x << "��" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
