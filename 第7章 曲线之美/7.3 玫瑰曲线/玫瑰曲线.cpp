/*
����õ������ 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
// ����õ������
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
	// ���ʳ�ʼ��
	pen.color(_red);
    pen.size(2);
    draw(2.0/3, 6 * 180);
    return 0;
}
