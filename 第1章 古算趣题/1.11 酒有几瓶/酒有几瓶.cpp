/*
���򣺾��м�ƿ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ���м�ƿ 
int main()
{
	int x = 1;
	while (x <= 11) {
		int y = 19 - x; 
		if (3 * x + y / 3 == 33) {
			cout << "����" << x << "ƿ���r��" << y << "ƿ" << endl; 
			break;
		}
		x += 1;
	}
    return 0;
}
