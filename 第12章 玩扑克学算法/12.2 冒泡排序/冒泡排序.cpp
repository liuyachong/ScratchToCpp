/*
����ð������ 
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

// ð������ 
void bubble_sort(int a[], int size)
{
	int j = 1;                    // ��ʼλ�� 
	int end = size - 1;           // ����λ�� 
	while (j <= end) {            // ��δ���������Ԫ�ؽ�������
		int i = end;              // ��δ��������ĩβ��ǰ����
		cout << "��" << j << "������" << endl;
		while (i >= j) {          // ����δ��������
			if (a[i] < a[i-1]) {  // �Ƚ�������Ԫ��
				int temp = a[i];  // ��С��Ԫ�ؽ�����ǰ��
				a[i] = a[i-1];
				a[i-1] = temp;
			}
			cout << j << "," << i << "," << i-1 << ","
			     << arr_to_str(a, size) << endl;
			i = i - 1;             // ��ǰ�ƶ�δ����������α�
		}
		cout << endl;
		j = j + 1;                 // δ��������ͷ��λ������ƶ�һλ
	}
}

// ������ 
int main()
{
	int a[] = {8, 6, 4, 7, 2};
	int len = sizeof(a) / sizeof(int);
	cout << "����ǰ��" << arr_to_str(a, len) << endl;
	bubble_sort(a, len);
	cout << "�����" << arr_to_str(a, len) << endl;
    return 0;
}
