/*
�������м��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ���м��� 
int main()
{
	int n = 1, t = 1;                            // ����n���ܷ���t 
	for (int i = 0; i < 5; i++) {                // ���ܷ���
		n = 2 * n;
		t += n;
	}
	int d = 378 * (16.0 / t);                    // �����2���·��
	cout << "��2������" << d << "��·" << endl; 
    return 0;
}
