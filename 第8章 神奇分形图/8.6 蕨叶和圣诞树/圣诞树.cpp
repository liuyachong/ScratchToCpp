/*
����ʥ����
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶��Scratch��C++����ѧ��
*/
// ȫ�ֱ���
int main_angle = 0; // ��һ������֦��ת�Ƕ���5��Ϊ0
float offset = 0.2; // ����֦ƫ����
float scale = 0.5;  // ��֦������
int angle = 100;     // ��һ������֦��ת�Ƕ���60��Ϊ100

// ��������
// �ݹ黭ާҶ����
void draw(float length, int toward);
// ��ת
void rotation(float length, int angle, int toward);
// ����
void draw_line(float length);
// ������
void draw_gift();

// ����ާҶ����ͼ
int main()
{
    pen.move(0, -170);
    draw_line(50); // ��һ��������������50
    draw(30, 1);
    return 0;
}

// ����ʵ��
// �ݹ黭ާҶ����
void draw(float length, int toward)
{
    // �ݹ��������
    if (length < 1) {
        draw_gift();
        return;
    }
    // ������֦
    draw_line(length);
    // ������֦����������תһ���Ƕȼ�������
    rotation(length * 0.9, 0 - main_angle, toward);
    // �����ҷ�֦
    rotation(length * scale, 100 + rand() % 20, -1); // �ڶ�������֦�Ƕ�����仯
    // ƫ��һ������
    pen.fd(length * offset);
    // �������֦
    rotation(length * scale, 100 + rand() % 20, 1); // �ڶ�������֦�Ƕ�����仯
    // ���ʻָ���ʼλ��
    pen.fd(0 - length * offset);
    pen.fd(0 - length);
}

// ��ת
void rotation(float length, int angle, int toward)
{
    if (length < 15) {
        pen.lt(angle * toward);
        // ��ӵݹ����
        draw(length, toward);
        pen.rt(angle * toward);
    }
    else
        draw(length, toward);
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

// ������
void draw_gift()
{
    if (rand() % 100 == 1) {
        int colors[] = {_red, _white, _yellow, _blue, _pink};
        pen.down();
        pen.oo(2.5, colors[rand() % 5]);
        pen.up();
    }
}
