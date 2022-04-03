/*
程序：龙曲线
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch到Python和C++》
*/
// 生成转向序列
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

// 计算n阶龙曲线的线段长度
float get_length(float b, int n)
{
    float length = b;
    for (int i = 0; i < n; i++) {
        length = sqrt(length * length / 2);
    }
    return length;
}

// 绘制龙曲线
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

// 绘制一个10阶的龙曲线
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