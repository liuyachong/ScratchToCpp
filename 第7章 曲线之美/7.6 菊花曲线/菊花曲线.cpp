/*
程序：菊花曲线 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 绘制菊花曲线
void draw()
{
    const float PI = 3.14159;
	int colors[] = {_blueViolet, _gold, _red, _green, 
	                _blue, _yellow, _darkyran};
    float a = 15, t = 0;
    for (int cycle = 1; cycle <= 12; cycle++) {
        pen.color(colors[cycle % 7]);
        while (t <= cycle * 360) {
			float rad = PI / 180 * t;
            float r = 5 * (1 + sin(11 * rad / 5)) \
                      - 4 * pow(sin(17 * rad / 3), 4) \
                      * pow(sin(2 * cos(3 * rad) - 28 * rad), 8);
            float x = a * sin(rad) * r;
            float y = a * cos(rad) * r;
            pen.line(x, y);
            t += 1;
        }
    }
}

int main()
{
	// 画笔初始化
	pen.cls(_black);
    pen.size(2);
	draw();
    return 0;
}