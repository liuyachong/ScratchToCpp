/*
���򣺿������� 
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

// ����Ԫ��
void swap(int a[], int x, int y)
{
    if (x == y) {
        cout << "��������" << a[x] << "," << a[y] << endl;
        return;
    }
    cout << "������" << a[x] << "," << a[y] << endl;
    int temp = a[x]; a[x] = a[y]; a[y] = temp;
    return;
}

// һ�ν�������
int partition(int a[], int left, int right)
{
    int base = left; // ��δ����������˵�һ��Ԫ��Ϊ��׼
    while (left < right) {
    	// ���������ҳ�һ��С�ڻ�׼��Ԫ��
        while (a[right] >= a[base] and left < right)
            right = right - 1;
        // ���������ҳ�һ�����ڻ�׼��Ԫ��
        while (a[left] <= a[base] and left < right)
            left = left + 1;
        // ����λ�ò�ͬ������Ԫ��
        if (left < right)
            swap(a, left, right);
    }
    // λ����ͬ������Ԫ��(��ʱΪͬһԪ��)���׼Ԫ�ؽ���
    swap(a, base, left);
    // ���ػ�׼����λ�� 
    return left;
}

// �������� 
void quicksort(int a[], int left, int right)
{
	if (left < right) {                       // δ�������򲻿ɷָ�ʱ�������
		int base = partition(a, left, right); // �û�׼Ԫ�ع�λ�����ػ�׼λ��
		quicksort(a, left, base - 1);         // �Ի�׼��ߵķ�����������
		quicksort(a, base + 1, right);        // �Ի�׼�ұߵķ�����������
	}
}

// ������ 
int main()
{
	int a[] = {7, 6, 8, 2, 4};
	int len = sizeof(a) / sizeof(int);
	cout << "����ǰ��" << arr_to_str(a, len) << endl;
	quicksort(a, 0, len - 1);
	cout << "�����" << arr_to_str(a, len) << endl;
    return 0;
}
