/*
���򣺺������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
// ���ƺ�������
void draw()
{
    const float PI = 3.14159;
	int cycle = 12, t = 0;
    int a = 40, b = 40;
	while (t <= cycle * 360) {
		float rad = PI / 180 * t;
		float r = exp(cos(rad)) - 2 * cos(4*rad) + pow(sin(rad/12), 5);
		float x = a * sin(rad) * r;
		float y = b * cos(rad) * r;
		pen.line(x, y);
		pen.down();
		t += 1;
	}
}

int main()
{
	// ���ʳ�ʼ��
    pen.color(_red);
    pen.size(1);
	draw();
    return 0;
}
