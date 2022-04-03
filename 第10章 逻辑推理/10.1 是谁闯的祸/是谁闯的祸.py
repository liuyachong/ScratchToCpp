'''
程序：是谁闯的祸
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(who):
    '''判定是谁闯的祸'''
    a = who == 2
    b = who == 4
    c = who != 3
    d = who != 4
    if a + b + c + d == 1:
        print(who)

def main():
    '''是谁闯的祸'''
    who = 1
    while who <= 4:
        judge(who)
        who += 1

if __name__ == '__main__':
    main()
