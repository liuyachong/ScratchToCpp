/*
����ͣ������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ͣ������ 
int main()
{
    int distance[] = {50, 80, 39, 60, 40, 32}; // ������վ֮��ľ���
    int flags[] = {0, 0, 0, 0, 0, 0};          // �����ڼ���վͣ�����ͱ��
    int mileage = 100;                         // Ħ�г�����ʻ�Ĺ�����
    
    for (int i = 0; i < 5; i++) {
        mileage -= distance[i];          // ����ĳ������վ������ʻ�Ĺ�����
        if (mileage < distance[i+1]) {   // ������ܵ�����һ������վ����ͣ������ 
            flags[i] = 1;                // ���ü��ͱ�ǣ�1Ϊ��Ҫ����
            mileage = 100;               // Ħ�г�������
        }
    }
    
    for (int i = 0; i < 6; i++) {        // ����ڸ�����վͣ���������
        cout << flags[i] << ", ";
    }
    cout << endl;
    return 0;
}
