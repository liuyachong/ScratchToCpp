'''
程序：国王的保镖
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(who):
    '''判断谁击中了杀手'''
    a = who == 8 or who == 6
    b = who == 2
    c = who == 7
    d = who != 2
    e = not (who == 8 or who == 6)
    f = not (who == 6 or who == 8)
    g = who != 3
    h = who == 8 or who == 6
    if a + b + c + d + e + f + g + h == 3:
        print(who)

def main():
    '''国王的保镖'''
    who = 1
    while who <= 8:
        judge(who)
        who += 1

if __name__ == '__main__':
    main()
