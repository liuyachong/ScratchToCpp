/*
���򣺲���Ф��Ϸ
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ����Ф��Ϸ 
int main()
{
    string animals[] = {"��", "ţ", "��", "��", "��", "��",
                        "��", "��", "��", "��", "��", "��"};
    map<int, string> questions;
    questions[1] = "�󣬻������������";
    questions[2] = "ţ�������ߣ���������";
    questions[4] = "�ã������ߣ�����";
    questions[8] = "�򣬺����������";
    int answer = 0;
    
    cout << "************************************" << endl;
    cout << "*               ����Ф             *" << endl;
    cout << "************************************" << endl;
    for (int n = 1; n <= 8; n = n * 2) {
        cout << "------------------------------------" << endl;
        cout << questions[n] << endl;
        cout << "------------------------------------" << endl;
        cout << "���������������Ф��������(y/n):";
        string input;
        cin >> input;
        if (input == "y")
            answer += n;
    }
    
    cout << "================���================" << endl;
    if (1 <= answer && answer <= 12)
        cout << "�����Ф�ǣ�" << animals[answer-1] << endl;
    else
        cout << "ѡ����ȷ��ϵͳ�޷��ж������Ф��";
    cout << "====================================" << endl;
    return 0;
}
