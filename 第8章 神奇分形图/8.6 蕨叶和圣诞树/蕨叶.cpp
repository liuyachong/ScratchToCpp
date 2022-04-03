/*
����ާҶ����
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
// ȫ�ֱ���
int main_angle = 5; // ��֦��ת�Ƕ�
float offset = 0.2; // ����֦ƫ����
float scale = 0.5;  // ��֦������
int angle = 60;     // ��֦��ת�Ƕ�

// ��������
// �ݹ黭ާҶ����
void draw(float length, int toward);
// ��ת
void rotation(float length, int angle, int toward);
// ����
void draw_line(float length);

// ����ާҶ����ͼ
int main()
{
	pen.speed(10);
	pen.up();
    pen.move(-50, -150);
	pen.angle(0);
	pen.down();
    draw(30, 1);
    return 0;
}

// ����ʵ��
// �ݹ黭ާҶ����
void draw(float length, int toward)
{
    // �ݹ��������
    if (length < 1) return;
    // ������֦
    draw_line(length);
    // ������֦����������תһ���Ƕȼ�������
    rotation(length - 1, 0 - main_angle, toward);
    // �����ҷ�֦
    rotation(length * scale, angle, -1);
    // ƫ��һ������
    pen.fd(length * offset);
    // �������֦
    rotation(length * scale, angle, 1);
    // ���ʻָ���ʼλ��
    pen.fd(0 - length * offset);
    pen.fd(0 - length);
}

// ��ת
void rotation(float length, int angle, int toward)
{
    pen.lt(angle * toward);
    // ��ӵݹ����
    draw(length, toward);
    pen.rt(angle * toward);   
}

// ����
void draw_line(float length)
{
    pen.size(length / 6);
    if (length < 2)
        pen.color(0x66bb21);
    else
        pen.color(0x4b6d3c);
    pen.down();
    pen.fd(length);
    pen.up();
}
