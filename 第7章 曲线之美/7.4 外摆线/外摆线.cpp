/*
程序：外摆钱 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 绘制外摆线
void draw(float n, float end)
{
	const float PI = 3.14159;
    float a = 45;
	float b = a / n;
    float t = 0;
    while (t <= end) {
		float rad = PI / 180 * t;
        float x = (a + b) * cos(rad) - b * cos((a + b) / b * rad);
        float y = (a + b) * sin(rad) - b * sin((a + b) / b * rad);
        pen.line(x, y);
        pen.down();
        t += 1;
    }
}

int main()
{
	// 画笔初始化
	pen.color(_green4);
	pen.size(2);
	pen.up();
    draw(5.0/2, 2 * 360);
    return 0;
}