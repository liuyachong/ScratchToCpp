/*
����������
���ߣ�����@С�����ѧ�ݹ��ں�
��Դ��ͼ�顶Ȥζ��������ͣ���Scratch��Python��C++��
*/
// ����ת������
vector<string> get_turn_orders(int n)
{
    vector<string> orders;
    for (int i = 0; i < n; i++) {
        int index = orders.size() - 1;
        orders.push_back("L");
        while (index >= 0) {
            if (orders[index] == "R") {
                orders.push_back("L");
            }
            else {
                orders.push_back("R");
            }
            index -= 1;
        }
    }
    return orders;
}

// ����n�������ߵ��߶γ���
float get_length(float b, int n)
{
    float length = b;
    for (int i = 0; i < n; i++) {
        length = sqrt(length * length / 2);
    }
    return length;
}

// ����������
void draw_curve(float b, int n)
{
    vector<string> orders = get_turn_orders(n);
    float length = get_length(b, n);
    pen.angle(n * 45 + 90);
    pen.fd(length);
    for (int i = 0; i < orders.size(); i++) {
        if (orders[i] == "R")
            pen.rt(90);
        else
            pen.lt(90);
        pen.fd(length);
    }
}

// ����һ��10�׵�������
int main()
{
	pen.speed(8);
	pen.color(_green);
	pen.size(2);
	pen.up();
    pen.move(-100, 0);
	pen.angle(90);
	pen.down();
    draw_curve(200, 10);
    return 0;
}