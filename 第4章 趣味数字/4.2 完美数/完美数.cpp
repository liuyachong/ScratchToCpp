/*
����Ѱ��������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж�һ����Ȼ���Ƿ�������
bool is_perfect(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)  // �ж��Ƿ����� 
            s += i;      // �ۼ�������֮�� 
    }
    return s == n;       // ������֮�͵��ڸ����������������� 
} 

// Ѱ�������� 
int main()
{
    for (int n = 1; n < 10000; n++) {
        if (is_perfect(n))     // ���ú����ж��Ƿ�Ϊ������ 
            cout << n << endl; // ��������� 
    }
    return 0;
}
