/*
���򣺹������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �������� 
int main()
{
	cout << "������������ܵ�ʱ�䣺";
	int game_time; cin >> game_time;
	int tortoise = 0;
    int rabbit = 0;
    int sleep_time = 0;
    int state = 1;
    int timer = 1;
    while (timer <= game_time) {
        tortoise += 3;
        if (state == 1) {
            rabbit += 9;
            if (timer % 10 == 0) {
                if (rabbit > tortoise)
                    state = 0;
        	}
        }
        else {
            sleep_time += 1;
            if (sleep_time == 30) {
                sleep_time = 0;
                state = 1;
            }
        }
        timer += 1; 
	}
    cout << tortoise << ", " << rabbit << endl;
	return 0;
}
