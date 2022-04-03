/*
程序：猴子选大王
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 猴子选大王
int main()
{
    queue<int> queue;              // 创建一个空队列
    for (int i = 1; i <= 88; i++)  // 将88只猴子编号入列
    	queue.push(i);
    int num = 1;                   // 从1开始报数
    while (queue.size() > 1) {     // 队列中剩下1个时结束循环
    	int n = queue.front();     // 将编号出列
    	queue.pop();
    	if (num % 6 > 0)           // 未报到6的重新入列
    		queue.push(n);
    	num += 1;
    }
	cout << queue.front() << endl; // 剩下的一个被选为大王
    return 0;
}
