/*
���򣺶����ʼ�
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// �����ʼ� 
int main()
{
	int x = 1;
	while (true) {
		int y = 1000 - x; 
		if (11 * x / 9 + 4 * y / 7 == 999) {
			int xm = 11 * x / 9;
			int ym = 4 * y / 7;
			cout << "�������" << x << "��������" << xm << "��Ǯ" << endl;
			cout << "���˿��" << y << "��������" << ym << "��Ǯ" << endl;
			break;
		}
		x += 1;
	}
    return 0;
}
