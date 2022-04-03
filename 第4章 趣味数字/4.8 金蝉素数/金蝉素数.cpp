/*
����Ѱ�ҽ������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж�����
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0)
            return false;
        i++;
    }
}

// �������
bool is_valid(int num)
{
	vector<int> digits;
	while (num > 0) {
		int d = num % 10;
		int t = count(digits.begin(), digits.end(), d);
		if (t > 0 or d % 2 == 0) // �ų���ͬ������ż��
			return false;
		else {
			digits.push_back(d);
			num = num / 10;
		}
	}
	if (digits[2] == 1 or digits[2] == 9) // ��֤�м������������������ѿ� 
		return false;
	return true;
}

// Ѱ�ҽ������
int main()
{
	int n = 13579;
	while (n <= 97531) {
		if (is_valid(n) and is_prime(n)) {
			// �ж�һ���ѿǺ��Ƿ����� 
			int m = n % 10000;
			m = m / 10;
			if (is_prime(m))
				cout << n << endl;
		}
		n += 2;
	}
    return 0;
} 
