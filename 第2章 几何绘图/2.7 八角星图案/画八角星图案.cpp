/*
程序：画八角星图案
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 画基本图形八角星
void draw_figure(int b)
{
	for (int i = 0; i < 8; i++) {
		pen.rt(45);
		pen.fd(b);
		pen.lt(90);
		pen.fd(b);
	}
}

// 绕顶点旋转图形
void rotate_figure(int b, int t)
{
    for (int i = 0; i < t; i++) {
        draw_figure(b);
        pen.lt(360.0/t);
	}
}
		
// 画八角星图案
int main()
{
	pen.color(_black);
	pen.size(4);
	pen.angle(90);
	int b = 35;          // 边数
    int t = 8;           // 个数
	rotate_figure(b, t); // 旋转画图
	return 0;
}