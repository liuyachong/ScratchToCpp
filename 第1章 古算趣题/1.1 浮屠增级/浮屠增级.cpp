/*
���򣺸������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// �������� 
int main()
{
	int n = 1, t = 1;                  // ����n���ܷ���t 
	for (int i = 0; i < 6; i++) {      // ���ܷ���
		n = 2 * n;
		t += n;
	}
	int d = 381 / t * 1;               // ���㶥�����
	cout << "������" << d << "յ��"; 
    return 0;
}
