/*
���򣺲������� 
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

// �������� 
void insertion_sort(int a[], int size)
{
	int j = 1;                     // δ����������ʼλ��
	int end = size - 1;            // δ�����������λ��
	while (j <= end) {             // ��δ���������Ԫ���Ƶ�����������
		int i = j;                 // �趨δ�����������ʼλ��
		cout << "��" << i << "������" << endl;
		while (i > 0) {            // ��δ��������ͷ��Ԫ�طŵ�����������
			if (a[i] < a[i-1]) {   // �Ƚ�������Ԫ��
				int temp = a[i];   // ��С��Ԫ�ؽ�����ǰ��
				a[i] = a[i-1];
				a[i-1] = temp;
				cout << j << "," << i << "," << i-1 << ","\
				     << arr_to_str(a, size) << endl; 
				i = i - 1;         // ��ǰ�ƶ�������������α�
			}
			else {
				cout << "����" << endl;
				i = 0;             // Ԫ�طŵ���ȷλ�ú�������ѭ��
			}
		}
		cout << endl;
		j = j + 1;                 // δ���������ͷ��λ������ƶ�һλ
	}
}

// ������ 
int main()
{
	int a[] = {6, 4, 8, 2, 7};
	int len = sizeof(a) / sizeof(int);
	cout << "����ǰ��" << arr_to_str(a, len) << endl;
	insertion_sort(a, len);
	cout << "�����" << arr_to_str(a, len) << endl;
    return 0;
}
