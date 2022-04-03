/*
程序：勾股分形树
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
const float PI = 3.14159;
int style = 1;        // 选择不同的风格
int main_branch = 45; // 主枝干的长度

// 画树枝
void draw_branch(float b)
{
    int colors[4][3] = {{8947967, 2500351, 460573},
                        {51712, 42496, 460573},
                        {3509247, 27903, 460573},
                        {16646143, 14476521, 460573}};
    int c[3] = {0}; // 选择不同的风格 
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

// 递归画勾股分形树
void draw_tree(float b)
{
    // 分枝小于指定值时结束递归
    if (b < 1) return;
    
    // 设定夹角
    int a = 10 * (rand() % 6 + 2);
    
    // 画左侧分枝
    pen.lt(a);
    draw_branch(b * cos(a * PI / 180));
    draw_tree(b * cos(a * PI / 180));
    pen.bk(b * cos(a * PI / 180));
    
    // 画右侧分枝
    pen.rt(90);
    draw_branch(b * sin(a * PI / 180));
    draw_tree(b * sin(a * PI / 180));
    pen.bk(b * sin(a * PI / 180));
    
    // 恢复初始方向
    pen.lt(90 - a);
    
    // 通过多次递归调用让树木更茂盛
    if (rand() % 10 + 1 >= 5)
        draw_tree(b * (rand() % 10) / 10);
	return;
}

// 绘制勾股分形树
int main()
{
	pen.speed(10);
	pen.up();
    pen.move(0, -150);
	pen.angle(0);
    draw_branch(main_branch); // 画出树干
    draw_tree(main_branch);   // 画勾股树
    return 0;
}
