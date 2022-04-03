'''
程序：十点半游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from random import randint, shuffle
'''定义全局变量'''
cards = []      #存放扑克牌
player = 0      #记录玩家的点数
computer = 0    #记录计算机的点数
result = 0      #对战结果
    
def main():
    '''十点半游戏'''
    print('****************************************')
    print('*             十点半游戏                 *')
    print('****************************************')
    shuffle_cards()   #洗牌
    player_hit()      #玩家要牌
    computer_hit()    #计算机要牌
    check()           #判断输赢
    show()            #显示结果
    return

def shuffle_cards():
    '''洗牌'''
    for i in range(14):
        cards.append(0.5)
    for j in range(4):
        for i in range(1, 11):
            cards.append(i)
    shuffle(cards)
    return

def player_hit():
    '''玩家要牌'''
    print('================玩家要牌=================')
    global player
    player = 0
    state = ''
    while state.lower() != 'n':
        print('----------------------------------------')
        print('我的点数是:', player)
        state = input('按 y 发牌，按 n 停牌:')
        if state.lower() == 'y':
            n = cards.pop()
            player += n
            if player >= 10.5:
                state = 'n'
                break
    print('我的点数是:', player)
    if player == 0:
        player_hit()
    return
    
def computer_hit():
    '''计算机要牌'''
    print('===============计算机要牌================')
    global computer
    computer = 0
    while computer < 10.5:
        n = cards.pop()
        computer += n
        if randint(1, 10) > 7 and computer > 8:
            break
    print('计算机的点数是:', computer)
    return

def check():
    '''判断输赢'''
    global result
    '''双方点数相等则为平局'''
    if player == computer:
        result = 0
        return;
    
    '''某一方点数大于10.5则胜出'''
    if player == 10.5:
        result = 1
        return
    elif computer == 10.5:
        result = 2
        return
    '''
    如果双方同时大于10.5或小于10.5，那么点数大的一方胜出。
    否则，点数小的一方胜出。
    '''
    result = 2
    p1 = player > 10.5 and computer > 10.5
    p2 = player < 10.5 and computer < 10.5
    if p1 + p2 == 1:
        if player > computer:
            result = 1
    else:
        if player < computer:
            result = 1
    return

def show():
    '''显示结果'''
    print('================对战结果=================')
    print('我 %s VS 计算机 %s' % (player, computer))
    if result == 0:
        print('打成平手！')
    elif result == 1:
        print('我赢了！')
    else:
        print('计算机赢了！')
    print('========================================')
    return

if __name__ == '__main__':   
    main()
