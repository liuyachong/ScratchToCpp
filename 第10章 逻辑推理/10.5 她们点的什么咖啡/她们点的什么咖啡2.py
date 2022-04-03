'''
程序：她们点的什么咖啡
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a, b, c):
    '''判断谁点什么咖啡'''
    p1 = a + b == 1 or a + b == 2
    p2 = a + c == 1
    p3 = not (b + c == 2)
    if p1 + p2 + p3 == 3:
        print(a, b, c)

def main():
    '''她们点的什么咖啡'''
    for a in range(2):
        for b in range(2):
            for c in range(2):
                judge(a, b, c)
                
if __name__ == '__main__':
    main()
