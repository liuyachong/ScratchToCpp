/*
���򣺹ű���ʽ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж�һ�����Ƿ����ظ����� 
bool no_repeat(int n)
{
	stringstream ss; ss << n;
	string num_str; ss >> num_str;
	set<char> myset;
	for (int i = 0; i < num_str.size(); i++) {
		myset.insert(num_str[i]);
	}
	return myset.size() == 5;
}

// ��ת���� 
int reverse_num(int n)
{
	stringstream ss; ss << n;
	string num_str; ss >> num_str;
	reverse(num_str.begin(), num_str.end());
	ss.clear(); ss << num_str;
	int num; ss >> num;
	return num;
}

// �ű���ʽ 
int main()
{
	int n = 12345;
	while (n < 98765) {
		if (no_repeat(n)) {         // �ж��Ƿ�5λ�����Ƿ��ظ� 
			int p = reverse_num(n); // ��ת����
			if (p % n == 0)         // ���������ҵ��� 
				cout << n;
		}
		n += 1;
	}
    return 0;
}
