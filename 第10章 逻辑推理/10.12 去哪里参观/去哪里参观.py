'''
程序：去哪里参观
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a, b, c, d, e):
    '''判断去哪里参观'''
    p1 = a + b == 2 or (a == 0 and b < 2)
    p2 = b + c < 2
    p3 = d + e > 0
    p4 = c + d == 2 or c + d == 0
    p5 = e + a + d == 3 or (e == 0 and a + d < 3)
    if p1 + p2 + p3 + p4 + p5 == 5:
        print(a, b, c, d, e)

def main():
    '''去哪里参观'''
    for a in range(2):
        for b in range(2):
            for c in range(2):
                for d in range(2):
                    for e in range(2):
                        judge(a, b, c, d, e)

if __name__ == '__main__':
    main()
