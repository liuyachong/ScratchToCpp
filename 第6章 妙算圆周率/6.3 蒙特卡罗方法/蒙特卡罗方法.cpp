/*
程序：用蒙特卡罗方法求圆周率
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/

void calc_pi(int total)
{
	// 用蒙特卡罗方法求圆周率
	int hits = 0;
	for (int i = 0; i < total; i++) {
		int x = rand() % 200 + 1 - 100;
        int y = rand() % 200 + 1 - 100;
		pen.move(x, y);
		if (sqrt(x * x + y * y) > 100)
			pen.oo(1, _blue);
		else {
			pen.oo(1, _red);
			hits += 1;
		}
	}
	double pi = (double) hits / total * 4;
	pen.move(0, -120);
	pen << setprecision(15) << pi << endl;
}

int main()
{
	// 画笔初始化
	pen.size(1);
	calc_pi(100000);
	return 0;
}