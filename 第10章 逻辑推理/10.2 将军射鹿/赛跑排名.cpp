/*
������������ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �ж��������� 
void judge(int dog, int rabbit, int cat, int monkey, int deer)
{
	int a = monkey < cat;
	int b = deer < dog;
	int c = rabbit < monkey and dog < rabbit;
	if (a + b + c == 3)
		cout << dog << rabbit << cat << monkey << deer << endl;
}

// �������� 
int main()
{
	for (int dog = 1; dog <= 5; dog++)
		for (int rabbit = 1; rabbit <= 5; rabbit++)
			for (int cat = 1; cat <= 5; cat++)
				for (int monkey = 1; monkey <= 5; monkey++)
					for (int deer = 1; deer <= 5; deer++)
						judge(dog, rabbit, cat, monkey, deer);
	return 0;
}
