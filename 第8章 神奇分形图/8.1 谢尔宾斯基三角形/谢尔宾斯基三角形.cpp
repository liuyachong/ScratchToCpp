/*
程序：谢尔宾斯基三角形 
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
*/
// 递归绘制正三角形
void draw(float b, int n)
{
    if (n == 0) return;  // 递归结束条件
    
    for (int i = 0; i < 3; i++) {
        draw(b/2, n-1);  // 递归调用，每次缩小b、n的值
		pen.lt(120);
        pen.fd(b);
    }    
}

int main()
{
    // 绘制一个边长400的谢尔宾斯基三角形
	pen.speed(8);        // 慢速画图
    pen.color(_blue);
    pen.size(2);
	pen.up();
	pen.move(200, -175);
    pen.angle(90);
	pen.down();
    draw(400, 6);
    return 0;
}