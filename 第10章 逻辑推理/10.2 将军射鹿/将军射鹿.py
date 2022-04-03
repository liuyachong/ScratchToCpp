'''
程序：将军射鹿
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(who):
    '''判断射鹿将军'''
    a = who == 1 or who == 3
    b = who != 5
    c = who == 4 or who == 2
    d = who != 4 and who != 2
    e = who != 3 and who != 1
    if a + b + c + d + e == 2:
        print(who)

def main():
    '''将军射鹿'''
    who = 1
    while who <= 5:
        judge(who)
        who += 1

if __name__ == '__main__':
    main()
