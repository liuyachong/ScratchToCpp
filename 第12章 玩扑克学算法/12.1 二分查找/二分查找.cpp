/*
���򣺶��ֲ��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ���ֲ���
int binary_search(int target, int a[], int len)
{
	int left = 0;                                   // ��ʼλ��
    int right = len - 1;                            // ����λ�� 
    while (left <= right) {                         // ���ɶ�λʱ��������
        int mid = (int)((right - left) / 2) + left; // �����м�λ��
        if (target == a[mid]) {                     // �ҵ�Ŀ�����ݣ�������λ��
            return mid;
        }
        else if (target < a[mid])                   // ��ǰ�벿�ֲ���
            right = mid - 1;
        else                                        // �ں�벿�ֲ���
            left = mid + 1;
    }
    return -1;                                      // ����ʧ��ʱ����-1
}
 
int main()
{
	int a[] = {2, 3, 5, 7, 8, 9};                   // Ҫ���������������е�
	int len = sizeof(a) / sizeof(int);
	
    cout << "����Ҫ���ҵ����ݣ�"; 
    int n; cin >> n;
    int pos = binary_search(n, a, len);
    if (pos == -1)
        cout << "�Ҳ�����";
    else
        cout << "λ�ã�" << pos; 
    return 0;
}
