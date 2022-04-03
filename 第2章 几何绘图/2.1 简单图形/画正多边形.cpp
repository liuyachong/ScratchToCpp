/*
程序：画正多边形
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 画正多边形
void draw_polygon(int c, int n)
{
	for (int i = 0; i < n; i++) {
		pen.fd(c/n);
		pen.lt(360.0/n);
	}
}

// 主程序
int main()
{
	pen.color(_black);
	pen.size(4);
	pen.angle(90);
    int c = 500;        // 周长
    int n = 3;          // 边数
    draw_polygon(c, n); // 绘制正n边形
	return 0;
}