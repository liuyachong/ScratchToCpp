/*
���򣺺�Ƽ�յ
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ��Ƽ�յ 
int main()
{
	int x = 1;
	while (true) {
	    if (x % 3 == 0 and x % 5 == 4 and x % 7 == 6) {
	    	cout << "�е���" << x << "յ" << endl;
	    	break;
		}
		x += 1;
	}
    return 0;
}
