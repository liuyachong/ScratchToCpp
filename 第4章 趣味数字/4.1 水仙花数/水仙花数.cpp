/*
����Ѱ��ˮ�ɻ���
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// Ѱ��ˮ�ɻ��� 
int main()
{
	int n = 100;
	while (n < 1000) {
		int a = n / 100;
		int b = n / 10 % 10;
		int c = n % 10;
	    if (n == a * a * a + b * b * b + c * c * c) {
	    	cout << n << endl;
		}
		n += 1;
	}
    return 0;
}
