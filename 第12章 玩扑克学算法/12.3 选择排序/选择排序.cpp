/*
����ѡ������ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ���������л� 
string arr_to_str(int a[], int size)
{
	stringstream ss; ss << "[";
	int i = 0;
	for (; i < size - 1; i++)
		 ss << a[i] << ", ";
	ss << a[i] << "]";
	return ss.str();
} 

// ѡ������ 
void selection_sort(int a[], int size)
{
	int j = 0;                // ��ʼλ�� 
	int end = size - 1;       // ����λ�� 
	while (j < end) {         // ��δ���������Ԫ�ؽ�������
		int p = j;            // ��δ��������ͷ��λ��Ԫ����Ϊ��Сֵ
		int i = j + 1;        // ��δ��������ĵڶ���Ԫ�ؿ�ʼ�Ƚ�
		cout << "��" << i << "������" << endl;
		while (i <= end) {    // ����δ��������
			if (a[i] < a[p])  // ��δ�����������ҵ�һ����СԪ��
				p = i;        // ��¼��СԪ�ص�λ��
			cout << j << "," << i << "," << p << endl;
			i = i + 1;        // ����ƶ�δ����������α�
		}
		int temp = a[j];      // ����СԪ�ؽ�����δ��������ͷ��
		a[j] = a[p];
		a[p] = temp;
		cout << arr_to_str(a, size) << endl;
		j = j + 1;            // δ���������ͷ��λ������ƶ�һλ
	}
}

// ������ 
int main()
{
	int a[] = {7, 8, 4, 2, 6};
	int len = sizeof(a) / sizeof(int);
	cout << "����ǰ��" << arr_to_str(a, len) << endl;
	selection_sort(a, len);
	cout << "�����" << arr_to_str(a, len) << endl;
    return 0;
}
