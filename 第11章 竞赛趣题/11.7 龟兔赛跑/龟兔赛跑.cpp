/*
程序：龟兔赛跑 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 龟兔赛跑 
int main()
{
	cout << "请输入龟兔赛跑的时间：";
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
