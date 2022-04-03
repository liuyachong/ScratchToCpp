/*
程序：模拟割圆术 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 画正多边形
void draw(float a, int n)
{
	pen.cls();
	pen.pic("stage.gif");
	pen.color(_red);
	pen.size(2);
	pen.move(0, 0);
	pen.angle(180/n);
	for (int i = 0; i < n; i++) {
		pen.fd(a);
		pen.rt(360.0/n);
	}
}

// 模拟割圆术
int main()
{
	const float PI = 3.14159;
	int r = 100, n = 6;
	for (int i = 0; i < 10; i++) {
		float a = 2.0 * r * sin(PI/n);
		draw(a, n);
		double pi = n * a / (2 * r);
		cout << setprecision(16);
		cout << n << "\t" << pi << endl;
		n = n * 2;
		wait(3);
	}
    return 0;
}