/*
������֤��°ͺղ��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж����� 
bool is_prime(int n)
{
	int i = 2;
	while (i * i <= n) {
		if (n % i == 0)
			return false;
		i += 1;
	} 
	return true;
}

// ��֤��°ͺղ��� 
void check(int n)
{
	int j = 2;
	while (j < n) {
		// ��һ��ż���ֽ�Ϊ�����������ж��Ƿ�Ϊ����
		if (is_prime(j) and is_prime(n-j)) {
			cout << n << " = " << j << " + " << n-j << endl;
			break;
		}
		j += 1; 
	} 
}

// ������ 
int main()
{
	int n = 4;
	while (n < 1000) {
		check(n);
		n += 2;
	} 
    return 0;
}
