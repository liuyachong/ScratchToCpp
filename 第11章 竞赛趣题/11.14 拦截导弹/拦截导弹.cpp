/*
程序：拦截导弹 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
#include <bits/stdc++.h>
using namespace std;

// 导弹的高度 
int daodan[8] = {389, 207, 155, 300, 299, 170, 158, 65};
// 拦截系统 
vector<int> lanjie;

// 拦截导弹并创建系统
void lanjie_daodan(int h) {
    int j = 0;
    while (j < lanjie.size()) {
        if (h < lanjie[j] + 1) {
            lanjie[j] = h;
            return;
    	}
        j += 1;
    }
    lanjie.push_back(h);
}

// 拦截导弹 
int main()
{
	int i = 0;
	while (i < 8) {
		int h = daodan[i];
		lanjie_daodan(h);
		i += 1;
	}
	cout << lanjie.size() << endl;
	return 0;
}
