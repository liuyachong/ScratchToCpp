/*
�����Զ��������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
// �����Զ��������
void draw(float a, float b, float end)
{
	const float PI = 3.14159;
    float t = 0;
    while (t <= end) {
		float rad = PI / 180 * t;
        float x = (a + b) * cos(rad) - b * cos((a + b) * b * rad);
        float y = (a + b) * sin(rad) - b * sin((a + b) * b * rad);
        pen.line(x, y);
        pen.down();
        t += 1;
    }
}

int main()
{
	// ���ʳ�ʼ��
	pen.color(_green4);
	pen.size(1);
	pen.up();
    draw(6, 67, 1 * 360);
    return 0;
}