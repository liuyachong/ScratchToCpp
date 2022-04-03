/*
����ʮ�����Ϸ
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

vector<float> cards; // ����˿��� 
float player = 0;    // ��¼��ҵĵ��� 
float computer = 0;  // ��¼������ĵ��� 
int result = 0;      // ��ս���

// ϴ�� 
void shuffle_cards()
{
    for (int i = 0; i < 14; i++)
        cards.push_back(0.5);
    
    for (int j = 0; j < 4; j++)
        for (int i = 1; i <= 10; i++)
            cards.push_back(i); 
            
    srand(time(0));
    random_shuffle(cards.begin(), cards.end());
}

// ���Ҫ��
void player_hit()
{
    cout << "================���Ҫ��=================" << endl;
    player = 0;
    string state = "";
    while (state != "n") {
        cout << "----------------------------------------" << endl;
        cout << "�ҵĵ����ǣ�" << player << endl;
        cout << "�� y ���ƣ��� n ͣ��:";
        cin >> state;
        if (state == "y") {
            float n = cards.back();
            cards.pop_back();
            player += n;
            if (player >= 10.5) {
                state = "n";
                break;
            }
        }
    }
    cout << "�ҵĵ�����:" << player << endl;
    if (player == 0)
        player_hit();
}

// �����Ҫ��
void computer_hit()
{
    cout << "================�����Ҫ��=================" << endl;
    computer = 0;
    while (computer < 10.5) {
        float n = cards.back();
        cards.pop_back();
        computer += n;
        if (rand() % 10 + 1 > 7 && computer > 8)
            break; 
    }
    cout << "������ĵ�����:" << computer << endl; 
}

// �ж���Ӯ
void check()
{
    // ˫�����������Ϊƽ�� 
    if (player == computer) {
        result = 0;
        return;
    }
    // ĳһ����������10.5��ʤ��
    if (player == 10.5) {
        result = 1;
        return;
    }
    if (computer == 10.5) {
        result = 2;
        return;
    }
    // ���˫��ͬʱ����10.5��С��10.5����ô�������һ��ʤ����
    // ���򣬵���С��һ��ʤ����
    result = 2;
    int p1 = player > 10.5 && computer > 10.5;
    int p2 = player < 10.5 && computer < 10.5;
    if (p1 + p2 == 1) {
        if (player > computer)
            result = 1;
    }
    else {
        if (player < computer)
            result = 1;
    }
} 

// ��ʾ���
void show()
{
    cout << "================��ս���=================" << endl;
    cout << "�� " << player << " VS ����� " << computer << endl;
    if (result == 0)
        cout << "���ƽ�֣�" << endl;
    else if (result == 1)
        cout << "��Ӯ�ˣ�" << endl;
    else
        cout << "�����Ӯ�ˣ�" << endl;
    cout << "========================================" << endl;
}

// ʮ�����Ϸ 
int main()
{
    cout << "****************************************" << endl;
    cout << "*             ʮ�����Ϸ               *" << endl;
    cout << "****************************************" << endl;
    shuffle_cards(); // ϴ�� 
    player_hit();    // ���Ҫ�� 
    computer_hit();  // �����Ҫ�� 
    check();         // �ж���Ӯ 
    show();          // ��ʾ��� 
    return 0;
}
