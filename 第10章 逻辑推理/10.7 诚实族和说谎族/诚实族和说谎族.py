'''
程序：诚实族和说谎族
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a, b, c):
    '''判断诚实族和说谎族'''
    p1 = (a == 1 and a + b + c == 2) + (a == 0 and a + b + c != 2)
    p2 = (b == 1 and a + b + c == 1) + (b == 0 and a + b + c != 1)
    p3 = (c == 1 and a + b + c == 1) + (c == 0 and a + b + c != 1)
    if p1 + p2 + p3 == 3:
        print(a, b, c)

def main():
    '''诚实族和说谎族'''
    for a in range(2):
        for b in range(2):
            for c in range(2):
                judge(a, b, c)

if __name__ == '__main__':
    main()
