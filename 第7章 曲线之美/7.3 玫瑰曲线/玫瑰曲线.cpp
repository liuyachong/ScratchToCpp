/*
程序：玫瑰曲线 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 绘制玫瑰曲线
void draw(float n, float end)
{
	const float PI = 3.14159;
	float a = 150;
    float t = 0;
    while (t <= end) {
		float rad = PI / 180 * t;
        float x = cos(rad) * a * sin(n * rad);
        float y = sin(rad) * a * sin(n * rad);
        pen.line(x, y);
        t += 1;
    }
}

int main()
{
	// 画笔初始化
	pen.color(_red);
    pen.size(2);
    draw(2.0/3, 6 * 180);
    return 0;
}
