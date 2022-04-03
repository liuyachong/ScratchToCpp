/*
���򣺵ߵ����ƺ� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ���㲹��5λ 
string fill_zero(int n)
{
	stringstream ss; ss << n;
	string num_str; ss >> num_str;
	
	if (n > 9999)
		return num_str;
	
	string zeros = "";
	for (int i = 0; i < 5 - num_str.size(); i++)
		zeros += "0";
	num_str = zeros + num_str;
	
	return num_str;
}

// �ߵ����� 
string reverse_num(string num_str)
{
	string digits = "0100009086";
	string reverse = "";
	for (int i = 0; i < num_str.size(); i++)
		reverse = digits[num_str[i] - '0'] + reverse;
	return reverse;
}

// �ߵ����ƺ�
int main()
{
	int total = 0;
	for (int i = 0; i < 100000; i++) {
		string n = fill_zero(i);
		string reverse = reverse_num(n);
		if (n == reverse) {
			cout << n << endl;
			total += 1;
		}
	}
	cout << total << endl;
	return 0;
}
