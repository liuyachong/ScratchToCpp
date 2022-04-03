/*
程序：圣诞树
作者：苏秦@小海豚科学馆公众号
来源：图书《从Scratch到C++轻松学》
*/
// 全局变量
int main_angle = 0; // 第一步，主枝旋转角度由5改为0
float offset = 0.2; // 两分枝偏移量
float scale = 0.5;  // 分枝缩减量
int angle = 100;     // 第一步，分枝旋转角度由60改为100

// 函数声明
// 递归画蕨叶分形
void draw(float length, int toward);
// 旋转
void rotation(float length, int angle, int toward);
// 画线
void draw_line(float length);
// 画礼物
void draw_gift();

// 绘制蕨叶分形图
int main()
{
    pen.move(0, -170);
    draw_line(50); // 第一步，让主干增高50
    draw(30, 1);
    return 0;
}

// 函数实现
// 递归画蕨叶分形
void draw(float length, int toward)
{
    // 递归结束条件
    if (length < 1) {
        draw_gift();
        return;
    }
    // 画出主枝
    draw_line(length);
    // 缩减主枝，并向右旋转一个角度继续生长
    rotation(length * 0.9, 0 - main_angle, toward);
    // 画出右分枝
    rotation(length * scale, 100 + rand() % 20, -1); // 第二步，分枝角度随机变化
    // 偏移一定距离
    pen.fd(length * offset);
    // 画出左分枝
    rotation(length * scale, 100 + rand() % 20, 1); // 第二步，分枝角度随机变化
    // 画笔恢复初始位置
    pen.fd(0 - length * offset);
    pen.fd(0 - length);
}

// 旋转
void rotation(float length, int angle, int toward)
{
    if (length < 15) {
        pen.lt(angle * toward);
        // 间接递归调用
        draw(length, toward);
        pen.rt(angle * toward);
    }
    else
        draw(length, toward);
}

// 画线
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

// 画礼物
void draw_gift()
{
    if (rand() % 100 == 1) {
        int colors[] = {_red, _white, _yellow, _blue, _pink};
        pen.down();
        pen.oo(2.5, colors[rand() % 5]);
        pen.up();
    }
}
