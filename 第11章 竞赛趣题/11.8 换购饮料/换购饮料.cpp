/*
���򣺻�������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ��������
int main()
{
    int bottles;
    cout << "�����뿪ʼ���˶���ƿ���ϣ�";
    cin >> bottles;
    int caps = bottles;
    while (caps >= 3) {
        int exchange = caps / 3;
        caps = exchange + caps % 3;
        bottles += exchange; 
    }
    cout << "һ���ܺ�" << bottles << "ƿ����" << endl;
    return 0;
}
