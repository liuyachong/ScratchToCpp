/*
����һ��֮� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// һ��֮�
int main()
{
	cout.precision(16);
	long long n = 1;
	double s = 0;
	while (s < 1) {
		n = 2 * n;
		s += 1.0/n;
		cout << "1/" << n << " : " << s << endl;
	}
	return 0;
}
