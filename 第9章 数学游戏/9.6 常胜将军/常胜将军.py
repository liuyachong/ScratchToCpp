'''
程序：取火柴游戏
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from random import randint
'''全局变量'''
total = 0 #火柴总数
limit = 0 #每次取火柴的限量

def main():
    '''主程序'''
    print('****************************************')
    print('*               取火柴游戏               *')
    print('****************************************')
    set_rule()
    print('================开始游戏=================')
    while total > 0:
        player_take()
        if total == 0:
            print('================对战结果=================')
            print('你赢了，计算机输了！')
        else:
            computer_take()
            if total == 0:
                print('================对战结果=================')
                print('计算机赢了，你输了！')
    return

def set_rule():
    '''设定规则'''
    print('================设定规则=================')
    global total, limit
    while limit < 2:
        limit = int(input('请输入每次最多取多少根火柴(如2,3,4…):'))
        if limit < 2:
            print('每次最多取火柴数不能小于2')
            
    while total <= limit:
        total = int(input('请输入火柴的总数(如15,18,21…):'))
        if total <= limit:
            print('火柴的总数必须大于%d' % limit)

    print('================游戏规则=================')
    print('一堆火柴有%d根，二人轮流取火柴，' % total)
    print('每次可取走1～%d根，取走最后一根的获胜。' % limit)
    return

def player_take():
    '''玩家取火柴'''
    print('----------------玩家取火柴---------------')
    global total
    n = 0
    while n <= 0:
        print('提示:建议取', total % (limit + 1))
        n = int(input('请输入取火柴的数目:'))
        if n < 1 or n > limit:
            n = 0
        if n > total:
            n = 0
        total = total - n
        print('还剩下火柴 %d 根' % total)
    return

def computer_take():
    '''计算机取火柴'''
    print('---------------计算机取火柴--------------')
    global total
    n = total % (limit + 1)
    if n == 0:
        n = randint(1, limit)
    total = total - n
    print('计算机取走 %d 根' % n)
    print('还剩下火柴 %d 根' % total)
    return

if __name__ == '__main__':   
    main()
