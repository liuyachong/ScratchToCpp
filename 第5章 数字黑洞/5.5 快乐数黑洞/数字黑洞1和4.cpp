/*
���򣺿������ڶ������ֺڶ�1��4 �� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ��ƽ����
int sum_squares(int n)
{
    int sumsq = 0, d = 0; 
    while (n > 0) {
    	d = n % 10; 
        sumsq += d * d;
        n = n / 10;
    }
    return sumsq;
}

// ��֧���ֺڶ�4
void branch4(int n)
{
    cout << n << endl;
    if (n == 20)
        return;
    int sumsq = sum_squares(n);
    branch4(sumsq);
}

// ���ֺڶ�1��4 
void blackhole14(int n)
{
	if (n == 4) {
	    branch4(n);
	    return;
	}
	cout << n << endl;
	if (n == 1)
		return;
	int sumsq = sum_squares(n);
	blackhole14(sumsq);
}

// ��ڳ��� 
int main()
{
	cout << "������һ����0��Ȼ����"; 
	int n; cin >> n;
	blackhole14(n);
    return 0;
}
