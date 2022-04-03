/*
���򣺿ƺ�ѩ��
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch��Python��C++��
*/
// �ݹ���ƿƺ�����
void draw_curve(float b, int n)
{
    if (n == 0) {         // �ݹ��������
        pen.fd(b);
        return;
    }
    
    draw_curve(b/3, n-1); // ���߶΢�
    
    pen.rt(60);
    draw_curve(b/3, n-1); // ���߶΢�
    
    pen.lt(120);
    draw_curve(b/3, n-1); // ���߶΢�
    
    pen.rt(60);
    draw_curve(b/3, n-1); // ���߶΢�
}

// ���ƿƺ�ѩ��
void draw_snowflake(float b, int n)
{
    for (int i = 0; i < 3; i++) {
        draw_curve(b, n);
        pen.lt(120);
    }
}

// ����һ��4�׵Ŀƺ�ѩ��
int main()
{
	pen.speed(8);
	pen.color(_black);
	pen.size(2);
	pen.up();
    pen.move(-150, -90);
    pen.angle(90);
	pen.down();
    draw_snowflake(300, 4);
    return 0;
}