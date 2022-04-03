/*
程序：蕨叶分形2
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 全局变量
int main_angle = 5; // 主枝旋转角度
float offset = 0.2; // 两分枝偏移量
float scale = 0.5;  // 分枝缩减量
int angle = 60;     // 分枝旋转角度

// 函数声明
// 递归画蕨叶分形
void draw(float length, int toward);
// 旋转
void rotation(float length, int angle, int toward);
// 画线
void draw_line(float length);

// 绘制蕨叶分形图
int main()
{
    pen.move(-100, -170);
    draw(40, 1);
    return 0;
}

// 函数实现
// 递归画蕨叶分形
void draw(float length, int toward)
{
    // 递归结束条件
    if (length < 1) return;
    // 画出主枝
    draw_line(length);
    // 缩减主枝，并向右旋转一个角度继续生长
    rotation(length * 0.9, 0 - main_angle, toward);
    // 画出右分枝
    rotation(length * scale, angle, -1);
    // 偏移一定距离
    pen.fd(length * offset);
    // 画出左分枝
    rotation(length * scale, angle, 1);
    // 画笔恢复初始位置
    pen.fd(0 - length * offset);
    pen.fd(0 - length);
}

// 旋转
void rotation(float length, int angle, int toward)
{
    pen.lt(angle * toward);
    // 间接递归调用
    draw(length, toward);
    pen.rt(angle * toward);   
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

