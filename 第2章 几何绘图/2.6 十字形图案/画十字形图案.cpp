/*
程序：画十字形图案 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 画基本图形十字形
void draw_figure()
{
	for (int i = 0; i < 4; i++) {
		pen.fd(50);
		pen.rt(90);
		pen.fd(50);
		pen.lt(90);
		pen.fd(50);
		pen.rt(90);
	}
}

// 画十字形图案
int main()
{
	pen.color(_black);
	pen.size(4);
	pen.angle(0);
    int t = 4;                    // 个数
	for (int i = 0; i < t; i++) { // 旋转画图
		draw_figure();
		pen.lt(360.0/t);
	}
	return 0;
}