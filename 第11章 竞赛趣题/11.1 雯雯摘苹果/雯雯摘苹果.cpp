/*
��������ժƻ�� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ����ժƻ�� 
int main()
{
	int apple[] = {100, 200, 150, 140, 129, 134, 167, 198, 200, 99};
	int vit = 10, num = 0, i = 0;  // ����vit����ժ��num��������i 
	while (i < 10) {
		if (apple[i] <= 110) {     // ����ժƻ�� 
			if (vit > 1) {
				vit -= 2;
				num += 1;
			}
		}
		else if (apple[i] < 140) {  // վ��������ժƻ�� 
			if (vit > 2) {
				vit -= 3;
				num += 1;
			}
		}
		i += 1;
	}
	cout << "ժ��" << num << "��ƻ��" << endl;
	return 0;
}
