/*
����������˹�ڶ���123���ֺڶ��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ������˹�ڶ� 
void blackhole123(string n)
{
	cout << n << endl;
	if (n == "123")
		return;
	int total = n.length();
	int even = 0, odd = 0, i = 0;
	while (i < total) {
		if ((n[i] - 48) % 2 == 0)
			even += 1;
		else
			odd += 1;
		i += 1;
	}
	stringstream ss; ss << even << odd << total;
	string m; ss >> m;
	blackhole123(m);
}

// ��ڳ��� 
int main()
{
	cout << "����������һ�����֣�"; 
	string n; cin >> n;
	blackhole123(n);
    return 0;
}

