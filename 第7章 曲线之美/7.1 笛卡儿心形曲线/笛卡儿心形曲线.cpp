/*
���򣺵ѿ�����������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
// ���Ƶѿ�����������
void draw()
{
	const float PI = 3.14159;
	int a = 80, t = 90;
	for (int i = 0; i < 360; i++) {
		float rad = PI / 180 * t;                // �Ƕ�תΪ����
        float x = cos(rad) * a * (1 - sin(rad));
        float y = sin(rad) * a * (1 - sin(rad));
        pen.line(x, y);
        t += 1;
    }
}

int main()
{
	// ���ʳ�ʼ��
    pen.color(_red);
    pen.size(3);
	draw();
    return 0;
}
