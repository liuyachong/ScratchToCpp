'''
程序：谁是爱丽斯的朋友
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(who):
    '''判断谁是爱丽斯的朋友'''
    a = who == 7
    b = who == 7
    c = who == 3
    d = who != 3
    e = who == 9
    f = who != 6 or who != 9
    g = who != 6 or who != 9
    h = who == 3
    i = who == 9
    if a + b + c + d + e + f + g + h + i == 4:
        print(who)

def main():
    '''谁是爱丽斯的朋友'''
    who = 1
    while who <= 9:
        judge(who)
        who += 1

if __name__ == '__main__':
    main()
