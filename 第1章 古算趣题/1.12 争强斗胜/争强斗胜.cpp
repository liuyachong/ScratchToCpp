/*
������ǿ��ʤ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ��ǿ��ʤ 
int main()
{
	int x = 1;
	while (true) {
		int y = (36 - x) / 3; 
	    if (8 * x + 6 * y == 108) {
	    	cout << "ҹ��" << x << "�ˣ���߸" << y << "��" << endl;
	    	break;
		}
		x += 1;
	}
    return 0;
}
