'''
程序：她们在做什么
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a, b, c, d):
    '''判断她们在做什么'''
    p1 = a != 1 and a != 4
    p2 = b != 1 and b != 3
    p3 = (a == 3 and d == 1) or (a != 3 and d != 1)
    p4 = c != 1 and c != 4
    p5 = d != 3 and d != 4
    if p1 + p2 + p3 + p4 + p5 == 5:
        print(a, b, c, d)
        
def main():
    '''她们在做什么'''
    for a in range(1, 5):
        for b in range(1, 5):
            for c in range(1, 5):
                d = 10 - a - b - c
                if len({a, b , c, d}) == 4:
                    judge(a, b, c, d)

if __name__ == '__main__':
    main()
