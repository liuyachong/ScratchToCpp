/*
�����пα��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// �пα��� 
int main()
{
	int n = 1, t = 1;                  // ����n���ܷ���t 
	for (int i = 0; i < 2; i++) {      // ���ܷ���
		n = 2 * n;
		t += n;
	}
	
	n = 1;
	for (int i = 1; i <= 3; i++) {     // ��������Ķ������� 
		int x = 34685 * n / t;
		cout << "��" << i << "�����" << x << "��" << endl; 
		n = 2 * n;
	}
    return 0;
}
