from turtle_plus import *
# 全局变量
STEP = 3
COLS = 480 // STEP
ROWS = 360 // STEP
UP, RIGHT, DOWN, LEFT = 1, 2, 3, 4
    
class LangtonAnt:
    '''兰顿蚂蚁'''
    def __init__(self):
        '''初始化'''
        self.orientation = UP    # 蚂蚁向上移动
        self.ant_col = COLS // 2 # 蚂蚁放在中心
        self.ant_row = ROWS // 2
        self.ant_map = []        # 蚂蚁的地图
        for i in range(ROWS):
            self.ant_map.append([0] * COLS)

    def turn(self, direction):
        '''蚂蚁转弯'''
        if direction == 'right':
            self.orientation += 1
            
        if self.orientation > 4:
            self.orientation = 1
            
        if direction == 'left':
            self.orientation -= 1
            
        if self.orientation < 1:
            self.orientation = 4

    def forward(self):
        '''蚂蚁前进'''
        if self.orientation == UP:
            self.ant_row += 1
            
        if self.orientation == DOWN:
            self.ant_row -= 1
            
        if self.orientation == RIGHT:
            self.ant_col += 1
            
        if self.orientation == LEFT:
            self.ant_col -= 1
            
    def draw_dot(self):
        '''画点'''
        x = self.ant_col * STEP - 240 + STEP / 2
        y = self.ant_row * STEP - 180 + STEP / 2
        up()
        goto(x, y)
        down()
        dot(STEP)
    
    def run(self):
        '''蚂蚁爬行'''
        while True:
            if not (0 <= self.ant_row < ROWS and 0 <= self.ant_col < COLS):
                break
            
            if 0 == self.ant_map[self.ant_row][self.ant_col]:
                self.ant_map[self.ant_row][self.ant_col] = 1
                pencolor('black')
                self.turn('left')
            else:
                self.ant_map[self.ant_row][self.ant_col] = 0
                pencolor('white')
                self.turn('right')

            self.draw_dot()
            self.forward()
        done()

if __name__ == '__main__':
    '''初始化'''
    up()
    goto(0, 0)
    '''调用兰顿蚂蚁'''
    ant = LangtonAnt()
    ant.run()
