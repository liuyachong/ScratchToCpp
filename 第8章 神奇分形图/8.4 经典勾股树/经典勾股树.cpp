/*
���򣺾��乴����
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
const float PI = 3.14159;

// ��������
void square(float b)
{
    for (int i = 0; i < 4; i++) {
        pen.fd(b);
        pen.rt(90);
    }
}

// �ݹ���ƹ�����
void draw(float b, int n)
{
    // �趨�ݹ��������
    if (n == 0) return;

    int angle = 45;
    square(b);

    pen.fd(b);
    pen.lt(angle);
    // �ڻ����Ϸ���С������֮ǰ����ݹ����
    draw(b * cos(angle * PI / 180), n-1);
    square(b * cos(angle * PI / 180));

    pen.rt(90);
    pen.fd(b * cos(angle * PI / 180));
    // �ڻ����Ϸ���С������֮ǰ����ݹ����
    draw(b * sin(angle * PI / 180), n-1);
    square(b * sin(angle * PI / 180));

    pen.rt(90);
    pen.fd(b * sin(angle * PI / 180));
    pen.rt(angle);
    pen.fd(b);
    pen.rt(90);
    pen.fd(b);
    pen.rt(90);
}

// �������
int main()
{
    pen.speed(8);
    pen.color(_blue);
    pen.size(2);
    pen.up();
    pen.angle(0);
    pen.move(0, -130);
    pen.down();
    draw(100, 9);
    return 0;
}
