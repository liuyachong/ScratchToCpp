/*
���򣺹��ɷ�����
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
const float PI = 3.14159;
int style = 1;        // ѡ��ͬ�ķ��
int main_branch = 45; // ��֦�ɵĳ���

// ����֦
void draw_branch(float b)
{
    int colors[4][3] = {{8947967, 2500351, 460573},
                        {51712, 42496, 460573},
                        {3509247, 27903, 460573},
                        {16646143, 14476521, 460573}};
    int c[3] = {0}; // ѡ��ͬ�ķ�� 
    memcpy(c, colors[style], sizeof(int));
    if (b < 1)
        pen.color(c[0]);
    else if (b < 1.5)
        pen.color(c[1]);
    else
        pen.color(c[2]);
    pen.size(b/3);
    pen.down();
    pen.fd(b);
    pen.up();
	return;
}

// �ݹ黭���ɷ�����
void draw_tree(float b)
{
    // ��֦С��ָ��ֵʱ�����ݹ�
    if (b < 1) return;
    
    // �趨�н�
    int a = 10 * (rand() % 6 + 2);
    
    // ������֦
    pen.lt(a);
    draw_branch(b * cos(a * PI / 180));
    draw_tree(b * cos(a * PI / 180));
    pen.bk(b * cos(a * PI / 180));
    
    // ���Ҳ��֦
    pen.rt(90);
    draw_branch(b * sin(a * PI / 180));
    draw_tree(b * sin(a * PI / 180));
    pen.bk(b * sin(a * PI / 180));
    
    // �ָ���ʼ����
    pen.lt(90 - a);
    
    // ͨ����εݹ��������ľ��ïʢ
    if (rand() % 10 + 1 >= 5)
        draw_tree(b * (rand() % 10) / 10);
	return;
}

// ���ƹ��ɷ�����
int main()
{
	pen.speed(10);
	pen.up();
    pen.move(0, -150);
	pen.angle(0);
    draw_branch(main_branch); // ��������
    draw_tree(main_branch);   // ��������
    return 0;
}
