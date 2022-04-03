/*
程序：科赫雪花
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch到Python和C++》
*/
// 递归绘制科赫曲线
void draw_curve(float b, int n)
{
    if (n == 0) {         // 递归结束条件
        pen.fd(b);
        return;
    }
    
    draw_curve(b/3, n-1); // 画线段①
    
    pen.rt(60);
    draw_curve(b/3, n-1); // 画线段②
    
    pen.lt(120);
    draw_curve(b/3, n-1); // 画线段③
    
    pen.rt(60);
    draw_curve(b/3, n-1); // 画线段④
}

// 绘制科赫雪花
void draw_snowflake(float b, int n)
{
    for (int i = 0; i < 3; i++) {
        draw_curve(b, n);
        pen.lt(120);
    }
}

// 绘制一个4阶的科赫雪花
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