/*
������ͯ�ֹ� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ��ͯ�ֹ� 
int main()
{
	int x = 1;
	while (true) {
		int y = 13 * x + 15; 
		if (y == 16 * x - 18) {
			cout << "��ͯ" << x << "�ˣ���" << y << "��" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
