/*
���򣺲�������Ϸ
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ��������Ϸ 
void guess_number()
{
	srand(time(0));
	int num = rand() % 100 + 1;
	int guess = 0;
	while (guess != num) {
		cout << "������Ҫ�µ����֣�";
		cin >> guess;
		if (guess > num)
			cout << "���ˣ�" << endl;
		if (guess < num)
			cout << "С�ˣ�" << endl; 
	}
	cout << "���ˣ�" << endl;
}

int main()
{
	guess_number();
	return 0;
}

