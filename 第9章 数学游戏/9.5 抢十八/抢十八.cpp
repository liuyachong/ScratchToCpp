/*
������ʮ����Ϸ
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

int target = 18;   // Ҫ����Ŀ���� 
int count_num = 0; // ����������¼��һ���Եĵ�ǰ����  

// ��ұ���
void player_say()
{
    cout << "=================��ұ���================" << endl;
    int num = 0;
    while (num <= 0) {
	    cout << "��ʾ�����鱨" << (target - count_num) % 3 << endl;
	    cout << "�뱨1��2��";
	    cin >> num;
	    if (num < 1 || num > 2) { 
		    cout << "�����±�����" << endl;
		    num = 0; 
		}
		if (num + count_num > target) {
		    cout << "�����±�����" << endl;
		    num = 0; 
		}
	}
	count_num = count_num + num;
	cout << "��ұ�����" << count_num << endl;
} 

// ���������
void computer_say()
{
    cout << "================���������===============" << endl;
	int num = (target - count_num) % 3;
    if (num == 0)
        num = rand() % 2 + 1;
        
	count_num = count_num + num;
	cout << "�����������" << count_num << endl;
}
 
// ������ 
int main()
{
	cout << "****************************************" << endl;
    cout << "*                ��ʮ����Ϸ             *" << endl;
    cout << "****************************************" << endl;
    // ���������������һ����ʼ����
    srand(time(0));
	if (rand() % 10 + 1 > 5)
	    computer_say();
	
	while (count_num != target) {
	    player_say();
	    if (count_num == target) { 
	    	cout << "===================���==================" << endl;
	        cout << "��Ӯ�ˣ�" << endl;
	    }
		else {
		    computer_say();
		    if (count_num == target) {
		    	cout << "===================���==================" << endl;
		        cout << "�����Ӯ�ˣ�" << endl;
		    }
		} 
	}
    return 0;
}
