/*
���򣺵ѿ�����������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
void draw()
{
	// ���Ƶѿ�����������
	const float PI = 3.14159;
	float a = 80, t = 90;
	for (int i = 0; i < 360 * 2; i++) {
		float rad = PI / 180 * t;                // �Ƕ�תΪ����
        float x = cos(rad) * a * (1 - sin(rad));
        float y = sin(rad) * a * (1 - sin(rad));
        pen.line(x, y);
		pen.line(0, 0);                          // ʵ�����Ч��
        t += 0.5;
    }
}

int main()
{
	// ���ʳ�ʼ��
    pen.color(_red);
    pen.size(3);
	pen.up();
	pen.move(0, 0);
	pen.down();
	draw();
    return 0;
}
