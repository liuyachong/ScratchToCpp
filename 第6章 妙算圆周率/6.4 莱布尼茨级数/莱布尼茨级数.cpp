/*
����������ļ���
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std; 
// ������ļ��� 
int main()
{
	cout.precision(15);
    double pi = 0;
	int n = 1, op = 1;
	while (true) {
		pi = pi + op * (4.0 / n);
		cout << n << "\t" << pi << endl;
		op = 0 - op;
		n += 2;
	} 
    return 0;
}
