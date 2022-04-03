'''
程序：委派任务
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a, b, c, d, e, f):
    '''判断谁去执行任务'''
    p1 = a + b > 0
    p2 = a + d != 2
    p3 = a + e + f == 2
    p4 = b + c == 0 or b + c == 2
    p5 = c + d == 1
    p6 = d + e == 0 or d == 1
    if p1 + p2 + p3 + p4 + p5 + p6 == 6:
        print(a, b, c, d, e, f)

def main():
    '''委派任务'''
    for a in range(2):
        for b in range(2):
            for c in range(2):
                for d in range(2):
                    for e in range(2):
                        for f in range(2):
                            judge(a, b, c, d, e, f)

if __name__ == '__main__':
    main()
