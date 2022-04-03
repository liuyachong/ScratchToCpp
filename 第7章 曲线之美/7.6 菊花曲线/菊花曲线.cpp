/*
���򣺾ջ����� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
// ���ƾջ�����
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
	// ���ʳ�ʼ��
	pen.cls(_black);
    pen.size(2);
	draw();
    return 0;
}