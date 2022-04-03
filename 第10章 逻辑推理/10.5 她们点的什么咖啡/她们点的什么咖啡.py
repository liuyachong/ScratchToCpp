'''
程序：她们点的什么咖啡
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(a, b, c):
    '''判断谁点什么咖啡'''
    if a + b == 1 or a + b == 2:
        if a + c == 1:
            if not (b + c == 2):
                print(a, b, c)

def main():
    '''她们点的什么咖啡'''
    for a in range(2):
        for b in range(2):
            for c in range(2):
                judge(a, b, c)
                
if __name__ == '__main__':
    main()
