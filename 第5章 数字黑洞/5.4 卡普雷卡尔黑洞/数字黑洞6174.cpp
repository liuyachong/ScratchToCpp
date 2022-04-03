/*
���򣺿����׿����ڶ���6174���ֺڶ��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

int digits[4] = {0};                        // ��ŷֽ���4������

// ������� 
int calc_diff()
{
	string a(4, '0'), b(4, '0');
	for (int i = 0; i < 4; i++) {
		a[i] = digits[i] + 48;              // ȡ�ô��� 
		b[i] = digits[3-i] + 48;            // ȡ��С�� 
	}
	stringstream ss; ss << a; int max; ss >> max;
	ss.clear(); ss << b; int min; ss >> min;
	int c = max - min;                      // ������С��֮�� 
	return c;
}

// �ֽ�����
void split_num(int n)
{
	for (int i = 0; i < 4; i++) {
	    digits[i] = n % 10;                  // �����λ���� 
	    n = n / 10;
	}
}

// 6174���ֺڶ�
void blackhole6174(int n)
{
	cout << n << endl;                        // ����м�ֵ 
	if (n == 6174) return;                    // �ݹ���� 
	split_num(n);                             // �ֽ�����
	sort(digits, digits + 4, greater<int>()); // �Ӵ�С���� 
	int m = calc_diff();                      // ������� 
	blackhole6174(m);                         // �ظ����в��� 
}

// ��ڳ��� 
int main()
{
	cout << "������4λ����ȫ��ͬ��������";
	int n; cin >> n;
    blackhole6174(n);
    return 0;
}
