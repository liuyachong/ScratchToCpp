'''
程序：区分旅客国籍
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a, b, c, d, e, f):
    '''判断旅客国籍'''
    p1 = a == 3 or a == 6
    p2 = b != 1 and b != 2
    p3 = c == 3
    p4 = e == 3 or e == 4 or e ==6
    p5 = f != 2
    if p1 + p2 + p3 + p4 + p5 == 5:
        print(a, b, c, d, e, f)

def main():
    '''区分旅客国籍'''
    for a in range(1, 7):
        for b in range(1, 7):
            for c in range(1, 7):
                for d in range(1, 7):
                    for e in range(1, 7):
                        f = 21 - a - b - c - d - e
                        if len({a, b, c, d, e, f}) == 6:
                            judge(a, b, c, d, e, f)

if __name__ == '__main__':
    main()
