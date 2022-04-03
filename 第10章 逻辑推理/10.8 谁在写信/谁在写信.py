'''
程序：谁在写信
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a, b, c, d):
    '''判断做事'''
    p1 = a != 2 and a != 3
    p2 = (a == 1 and d == 2) or (a != 1 and d != 2)
    p3 = b == 1 or b != 2
    p4 = d == 1 or d != 3
    p5 = c != 3 and c != 2
    if p1 + p2 + p3 + p4 + p5 == 5:
        print(a, b, c, d)
        
def main():
    '''谁在写信'''
    for a in range(1, 5):
        for b in range(1, 5):
            for c in range(1, 5):
                d = 10 - a - b - c
                if len({a, b , c, d}) == 4:
                    judge(a, b, c, d)

if __name__ == '__main__':
    main()
