/*
���򣺼�Ѽ����
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ��Ѽ���� 
int main()
{
	int x = 1;
	while (true) {
		int y = x * 2; 
		if (y - 8 == 3 * (x - 6)) {
			cout << "����" << x << "ֻ��Ѽ��" << y << "ֻ" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
