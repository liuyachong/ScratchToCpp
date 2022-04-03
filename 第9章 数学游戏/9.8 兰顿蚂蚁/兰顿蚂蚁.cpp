// 蚂蚁爬行
void ant_run(vector<int> ant_map, int step, int cols, int rows)
{
	while (true) {
		float row = (pen.getY() + 180) / step;
		float col = (pen.getX() + 240) / step;
		if (row > rows || col > cols || row < 0 || col < 0)
			break;
		int index = (row - 1) * cols + col;
		if (0 == ant_map[index]) {
			ant_map[index] = 1;
			pen.color(_black);
			pen.lt(90);
		}
		else {
			ant_map[index] = 0;
			pen.color(_white);
			pen.rt(90);
		}
		pen.rr(step, step);
		pen.fd(step);
	}
}

// 兰顿蚂蚁游戏
int main()
{
	int step = 3;          // 格子大小
	int cols = 480 / step; // 地图的列数
	int rows = 360 / step; // 地图的行数
	// 初始化蚂蚁爬行的地图
	vector<int> ant_map(rows * cols + 1, 0);
	// 初始化画笔
	pen.speed(10);
	pen.up();
	pen.angle(0);
	pen.move(0, 0);
	pen.down();
	// 蚂蚁爬行
	ant_run(ant_map, step, cols, rows);
    return 0;
}