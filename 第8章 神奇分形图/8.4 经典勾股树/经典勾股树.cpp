/*
程序：经典勾股树
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
const float PI = 3.14159;

// 画正方形
void square(float b)
{
    for (int i = 0; i < 4; i++) {
        pen.fd(b);
        pen.rt(90);
    }
}

// 递归绘制勾股树
void draw(float b, int n)
{
    // 设定递归结束条件
    if (n == 0) return;

    int angle = 45;
    square(b);

    pen.fd(b);
    pen.lt(angle);
    // 在画左上方的小正方形之前进入递归调用
    draw(b * cos(angle * PI / 180), n-1);
    square(b * cos(angle * PI / 180));

    pen.rt(90);
    pen.fd(b * cos(angle * PI / 180));
    // 在画右上方的小正方形之前进入递归调用
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

// 程序入口
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
