/*
���򣺳�ʤ������Ϸ��ȡ��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;
// ȫ�ֱ��� 
int total = 0; // �������
int limit = 0; // ÿ��ȡ��������

// �趨����
void set_rule()
{
    cout << "================�趨����=================" << endl;
    while (limit < 2) {
        cout << "������ÿ�����ȡ���ٸ����(��2,3,4��):";
        cin >> limit;
        if (limit < 2)
            cout << "ÿ�����ȡ���������С��2" << endl;
    }
    
    while (total <= limit) {
        cout << "�������������(��15,18,21��):";
        cin >> total;
        if (total <= limit)
            cout << "���������������" << limit << endl;
    }
    
    cout << "================��Ϸ����=================" << endl;
    cout << "һ�ѻ����" << total << "������������ȡ���" << endl;
    cout << "ÿ�ο�ȡ��1��" << limit << "����ȡ�����һ���Ļ�ʤ��" << endl; 
}

// ���ȡ���
void player_take()
{
    cout << "----------------���ȡ���---------------" << endl;
    int n = 0;
    while (n <= 0) {
        cout << "��ʾ������ȡ" << total % (limit + 1) << endl;
        cout << "������ȡ������Ŀ:";
        cin >> n;
        if (n < 1 || n > limit)
            n = 0;
        if (n > total)
            n = 0;
        total = total - n;
        cout << "��ʣ�»��" << total << "��" << endl; 
    }
}

// �����ȡ���
void computer_take()
{
    cout << "---------------�����ȡ���--------------" << endl;
    srand(time(0));
    int n = total % (limit + 1);
    if (n == 0)
        n = rand() % limit + 1;
    total = total - n;
    cout << "�����ȡ��" << n << "��" << endl;
    cout << "��ʣ�»��" << total << "��" << endl; 
}

// ������ 
int main()
{
    cout << "****************************************" << endl;
    cout << "*               ȡ�����Ϸ             *" << endl;
    cout << "****************************************" << endl;
    set_rule();
    cout << "================��ʼ��Ϸ================" << endl;
    while (total > 0) {
        player_take();
        if (total == 0) {
        	cout << "================��ս���=================" << endl;
            cout << "��Ӯ�ˣ���������ˣ�" << endl;
        }
        else {
            computer_take();
            if (total == 0) {
            	cout << "================��ս���=================" << endl;
                cout << "�����Ӯ�ˣ������ˣ�" << endl;
            }
        }
    }
    return 0;
}
