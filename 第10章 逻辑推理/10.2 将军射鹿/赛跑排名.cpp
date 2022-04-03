/*
程序：赛跑排名 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 判断赛跑排名 
void judge(int dog, int rabbit, int cat, int monkey, int deer)
{
	int a = monkey < cat;
	int b = deer < dog;
	int c = rabbit < monkey and dog < rabbit;
	if (a + b + c == 3)
		cout << dog << rabbit << cat << monkey << deer << endl;
}

// 赛跑排名 
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
