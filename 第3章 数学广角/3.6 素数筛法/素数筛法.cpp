/*
��������ɸ�� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ����ɸ�� 
void find_primes(int n)
{
	// ����2��n֮������ 
	vector<int> primes;
	for (int i = 2; i < n; i++)    
		primes.push_back(i);
	// ���ݰ�����ɫ��ɸ��ɾ������ 
	int p = 0, j = 0;
	while (p * p <= n) {
		p = primes[j];
		int i = j + 1;
		while (i < primes.size()) {
			if (primes[i] % p == 0)
				primes.erase(primes.begin() + i);
			else
				i += 1;
		}
		j += 1;
	}
	// ���������
	for (int i = 0; i < primes.size(); i++)
		cout << primes[i] << ", ";
} 

int main()
{
	int n = 1000;   // �趨ɸѡ������� 
	find_primes(n); // ɸѡ����
    return 0;
}
