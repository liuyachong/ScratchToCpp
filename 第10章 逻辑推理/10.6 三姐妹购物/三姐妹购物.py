'''
程序：三姐妹购物
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a,b, c):
    '''判断三姐妹各自购买了什么'''
    p1 = (b != 4) + (c != 2)
    p2 = (a != 2) + (c != 3)
    p3 = (a != 1) + (b != 3)
    if p1 == 1 and p2 == 1 and p3 == 1:
        if len({a, b, c}) == 3:
            print(a, b, c)
            
def main():
    '''三姐妹购物'''
    for a in range(1, 5):
        for b in range(1, 5):
            for c in range(1, 5):
                judge(a, b, c)

if __name__ == '__main__':
    main()
