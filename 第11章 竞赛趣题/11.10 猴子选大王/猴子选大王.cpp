/*
���򣺺���ѡ����
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ����ѡ����
int main()
{
    queue<int> queue;              // ����һ���ն���
    for (int i = 1; i <= 88; i++)  // ��88ֻ���ӱ������
    	queue.push(i);
    int num = 1;                   // ��1��ʼ����
    while (queue.size() > 1) {     // ������ʣ��1��ʱ����ѭ��
    	int n = queue.front();     // ����ų���
    	queue.pop();
    	if (num % 6 > 0)           // δ����6����������
    		queue.push(n);
    	num += 1;
    }
	cout << queue.front() << endl; // ʣ�µ�һ����ѡΪ����
    return 0;
}
