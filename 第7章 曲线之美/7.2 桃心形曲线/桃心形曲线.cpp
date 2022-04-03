/*
��������������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
// ��������������
void draw()
{
    const float PI = 3.14159;
    float a = 10, t = 0;
    while (t <= 360) {
		float rad = PI / 180 * t; 
        float x = a * 15 * pow(sin(rad), 3);
        float y = a * (15 * cos(rad) - 5 * cos(2*rad) \
						- 2 * cos(3*rad) - cos(4*rad));
        pen.line(x, y);
		pen.line(0, 0);
        t += 0.5;
    }
}

int main()
{
	pen.color(_red);
    pen.size(3);
	draw();
	return 0;
}
