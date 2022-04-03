'''
程序：吉普赛读心术
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from random import randint

def show_chart():
    '''显示读心术图表'''
    global target
    print('=================================================')
    alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    pos = randint(0, 25)
    target = alphabet[pos]
    for index in range(1, 101):
        if index % 9 == 0:
            print(index, target, sep=':', end='\t')
        else:
            pos = randint(0, 25)
            print(index, alphabet[pos], sep=':', end='\t')
        if index % 6 == 0: print()
    print()
    print('=================================================')
    return target

def main():
    '''吉普赛读心术游戏'''
    print('=================================================')
    print('                  吉普赛读心术                 ')
    print('=================================================')
    print('从10~99任选一个数，用这个数分别减去它的十位和个数上的数字。')
    print('如你选择68，那就用68-6-8=54。')
    print('然后在下面的字母表中找到54对应的字母，并记在心里。')
    #显示图表
    target = show_chart()
    #等待用户选择数字
    reply = input('输入yes，我就能说出你心里想的：')
    if reply == 'yes':
        print('你心里想的是：', target)
    else:
        print('放弃！')
    return
    
if __name__ == '__main__':
    main()
