/*
�������ص��� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
#include <bits/stdc++.h>
using namespace std;

// �����ĸ߶� 
int daodan[8] = {389, 207, 155, 300, 299, 170, 158, 65};
// ����ϵͳ 
vector<int> lanjie;

// ���ص���������ϵͳ
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

// ���ص��� 
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
