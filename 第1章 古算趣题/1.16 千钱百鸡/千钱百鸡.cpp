/*
����ǧǮ�ټ�
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ǧǮ�ټ� 
int main()
{
	for (int x = 1; x < 21; x++) {
		for (int y = 1; y < 34; y++) {
			int z = 100 - x - y;
			if (x * 50 + y * 30 + z * 10 / 3 == 1000)
				cout << x << ", " << y << ", " << z << endl;
		}
	}
    return 0;
}
