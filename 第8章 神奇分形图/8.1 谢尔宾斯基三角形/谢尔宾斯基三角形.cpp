/*
����л����˹�������� 
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch����Python��C++��
*/
// �ݹ������������
void draw(float b, int n)
{
    if (n == 0) return;  // �ݹ��������
    
    for (int i = 0; i < 3; i++) {
        draw(b/2, n-1);  // �ݹ���ã�ÿ����Сb��n��ֵ
		pen.lt(120);
        pen.fd(b);
    }    
}

int main()
{
    // ����һ���߳�400��л����˹��������
	pen.speed(8);        // ���ٻ�ͼ
    pen.color(_blue);
    pen.size(2);
	pen.up();
	pen.move(200, -175);
    pen.angle(90);
	pen.down();
    draw(400, 6);
    return 0;
}