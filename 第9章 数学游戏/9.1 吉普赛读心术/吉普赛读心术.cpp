/*
���򣺼����������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ��ʾ������ͼ�� 
char show_chart()
{
	cout << "=================================================" << endl;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	srand(time(0));
    int pos = rand() % 26;
    char target = alphabet[pos];
    for (int index = 1; index <= 100; index++) {
        if (index % 9 == 0)
            cout << index << ":" << target << "\t";
        else {
            pos = rand() % 26;
            cout << index << ":" << alphabet[pos] << "\t";
        }
        if (index % 6 == 0) cout << endl;
    }
    cout << endl;
    cout << "=================================================" << endl;
    return target;
} 

// ��������������Ϸ 
int main()
{
    cout << "=================================================" << endl;
    cout << "                    ������������                 " << endl;
    cout << "=================================================" << endl;
    cout << "��10~99��ѡһ��������������ֱ��ȥ����ʮλ�͸����ϵ����֡�" << endl;
    cout << "����ѡ��68���Ǿ���68-6-8=54��" << endl;
    cout << "Ȼ�����������ĸ�����ҵ�54��Ӧ����ĸ�����������" << endl;
    // ��ʾͼ��
    char target = show_chart();
    // �ȴ��û�ѡ������
    cout << "����yes���Ҿ���˵����������ģ�";
    string reply; cin >> reply;
    if (reply == "yes")
        cout << "����������ǣ�" << target << endl;
    else
        cout << "������" << endl;
    return 0;
}
