/*
���򣺼���ʯͷ�� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �Ƚϴ�С 
string compare(int a, int b)
{
	string r = "";
	if (a + b == 5)
		r = a < b ? "a" : "b";
	if ((a + b == 7) or (a + b == 2))
		r = a > b ? "a" : "b";
	return r;
}

// ����ʯͷ��
int main()
{
	int series_a[3] = {5, 2, 0};    // СA�ĳ�ȭ���� 
	int series_b[4] = {5, 0, 5, 2}; // СB�ĳ�ȭ���� 
    int boy_a = 0, boy_b = 0;       // СA��СBӮ�Ĵ��� 
    int i = 0;
    while (i < 10) {
        int a = series_a[i % 3];
        int b = series_b[i % 4];
        string r = compare(a, b);
        if (r == "a")
            boy_a += 1;
        if (r == "b")
            boy_b += 1;
        i += 1;
    }
    cout << boy_a << " : " << boy_b << endl;
	return 0;
}
