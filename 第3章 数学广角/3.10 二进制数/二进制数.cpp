/*
���򣺶������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �������� 
int main()
{
	cout << "������һ��ʮ����������";
	int decimal; cin >> decimal;
	string binary;
	if (decimal == 0)
		binary = "0";
	else {
		binary = "";
		while (decimal > 0) {
			int remainder = decimal % 2;
			binary = (char)(remainder + 48) + binary;
			decimal = decimal / 2;
		}
	}
	binary = "0b" + binary;
	cout << binary << endl;
    return 0;
}
