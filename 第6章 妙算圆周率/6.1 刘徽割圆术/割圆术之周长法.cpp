/*
���򣺸�Բ��֮�ܳ���
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std; 
// ��Բ��֮�ܳ��� 
int main()
{
	cout.precision(16);
	int n = 6;
	while (n <= 3072) {
		double pi = sin(M_PI/n) * n;
		cout << n << "\t" << pi << endl;
		n += 2;
	} 
    return 0;
}
