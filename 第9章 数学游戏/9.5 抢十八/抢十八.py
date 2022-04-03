'''
程序：抢十八游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from random import randint
'''定义全局变量'''
target = 18      # 要抢的目标数
count_num = 0    # 计数器，记录玩家或计算机的当前报数

def main():
    '''主程序'''
    print('****************************************')
    print('*                抢十八游戏              *')
    print('****************************************')
    print('游戏开始...')
    #计算机或玩家随机由一方开始报数
    if 1 == randint(1, 2):
        computer_say()
    #进行报数游戏
    while count_num != target:
        player_say()
        if count_num == target:
            print('=================对战结果================')
            print('你赢了！')
        else:
            computer_say()
            if count_num == target:
                print('=================对战结果================')
                print('计算机赢了！')
    return

def player_say():
    '''玩家报数'''
    print('=================玩家报数================')
    global count_num
    num = 0
    while num <= 0:
        print('提示:建议报', (target - count_num) % 3)
        num = int(input('请报1或2:'))
        if num < 1 or num > 2:
            print('请重新报数!')
            num = 0
        if num + count_num > target:
            print('请重新报数!')
            num = 0
    else:
        count_num += num
        print('玩家报数:', count_num)
    return

def computer_say():
    '''计算机报数'''
    print('================计算机报数===============')
    global count_num
    num = (target - count_num) % 3
    if num == 0:
        num = randint(1, 2)
    count_num += num
    print('计算机报数:', count_num)
    return

if __name__ == '__main__':
    main()
