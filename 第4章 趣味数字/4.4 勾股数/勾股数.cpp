/*
����Ѱ�ҹ�����
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// Ѱ�ҹ����� 
int main()
{
    for (int a = 3; a < 100; a++) {
    	for (int b = a + 1; b < 100; b++) {
			for (int c = b + 1; c < 100; c++) {
				if (a * a + b * b == c * c)
					cout << a << "," << b << "," << c << endl;
			}
		}	
    }
    return 0;
}
