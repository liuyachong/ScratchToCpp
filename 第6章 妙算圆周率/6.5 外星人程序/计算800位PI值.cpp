/*
���򣺼���800λ��ֵ
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ��ȡ��ʽ��ÿһ���ֵ
int get_item(int remainder[], int index)
{
	int item = 0;
	int i = index - 1;
	while (i >= 0) {
		item = item + remainder[i] * 10000;
		remainder[i] = item % (i * 2 + 1);
		item = item / (i * 2 + 1);
		if (i > 0) item = item * i;
		i -= 1;
	}
	return item;
}

// ����800λ��ֵ 
int main()
{
	int digits = 800; // �趨����Բ���ʵ�λ����Ҫ���ܱ�4����
	int length = digits / 4 * 14;
	int remainder[length] = {};
	for (int i = 0; i < length; i++) remainder[i] = 2000;
	// ����ʽ��������һ�㿪ʼ������ÿ�����4λ��ֵ
	int pi = 0;
	int index = length; 
	while (index > 0) {
		int item = get_item(remainder, index);
		cout << setw(4) << setfill('0') << (pi + item / 10000);
		pi = item % 10000;
		index -= 14;
	}
	return 0;
}

