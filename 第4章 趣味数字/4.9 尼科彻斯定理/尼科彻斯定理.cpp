/*
������֤��Ƴ�˹����
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// ��֤��Ƴ�˹���� 
void check(int n)
{
	int cube = n * n * n;
	int a = 1;
	while (a <= cube) {
		// ���������������� 
		vector<int> odd_numbers;
		for (int b = a; b < a + 2 * n; b+=2)
			odd_numbers.push_back(b);
		// ��������� 
		int s = accumulate(odd_numbers.begin(), odd_numbers.end(), 0);
		if (s == cube) {
			// ������� 
		    for (int i = 0; i < odd_numbers.size(); i++)
		        cout << odd_numbers[i] << ",";
		    break;
		}
		a += 2;
	}
} 

// ������ 
int main()
{
	cout << "������һ����Ȼ����";
	int n; cin >> n;
    check(n);
    return 0;
} 
