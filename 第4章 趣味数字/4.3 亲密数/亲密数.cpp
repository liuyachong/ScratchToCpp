/*
����Ѱ��������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ��һ������������֮��
int factors_sum(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)  // �ж��Ƿ����� 
            s += i;      // �ۼ�������֮�� 
    }
    return s;
} 

// Ѱ�������� 
int main()
{
    for (int a = 1; a < 2000; a++) {
        int b = factors_sum(a);
        if (a < b) {
            int bs = factors_sum(b);
            if (bs == a)
                cout << "(" << a << "," << b << ")" << endl;
        }
    }
    return 0;
}
