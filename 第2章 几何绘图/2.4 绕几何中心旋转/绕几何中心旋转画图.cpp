/*
程序：绕几何中心旋转图形 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 画正多边形
void draw_polygon(int c)
{
	pen.up();
	pen.fd(c/4/2); pen.lt(90); pen.fd(c/4/2);
	pen.down();
	for (int i = 0; i < 4; i++) {
		pen.lt(90);
		pen.fd(c/4);
	}
	pen.up();
	pen.fd(0 - c/4/2); pen.lt(90); pen.fd(c/4/2);
}

// 绕几何中心旋转图形
void rotate_figure(int c, int t)
{
    for (int i = 0; i < t; i++) {
        draw_polygon(c);
        pen.lt(90.0/t);
	}
}

// 主程序
int main()
{
	pen.color(_black);
	pen.size(4);
	pen.angle(90);
    int c = 500;         // 周长
	int t = 2;           // 个数
    rotate_figure(c, t); // 旋转画图
	return 0;
}