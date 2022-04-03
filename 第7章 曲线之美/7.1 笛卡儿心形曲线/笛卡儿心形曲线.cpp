/*
程序：笛卡尔心形曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 绘制笛卡尔心形曲线
void draw()
{
	const float PI = 3.14159;
	int a = 80, t = 90;
	for (int i = 0; i < 360; i++) {
		float rad = PI / 180 * t;                // 角度转为弧度
        float x = cos(rad) * a * (1 - sin(rad));
        float y = sin(rad) * a * (1 - sin(rad));
        pen.line(x, y);
        t += 1;
    }
}

int main()
{
	// 画笔初始化
    pen.color(_red);
    pen.size(3);
	draw();
    return 0;
}
