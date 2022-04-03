'''
程序：猜数字游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from random import randint

def guess_number():
    '''猜数字游戏'''
    num = randint(1, 100)
    guess = 0
    while guess != num:
        guess = int(input('请输入要猜的数字：'))
        if guess > num:
            print('大了！')
        if guess < num:
            print('小了！')
    print('对了！')

if __name__ == '__main__':
    guess_number()
