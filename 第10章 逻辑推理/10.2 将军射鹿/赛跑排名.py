'''
程序：赛跑排名
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(dog, rabbit, cat, monkey, deer):
    '''判断排名'''
    a = monkey < cat
    b = deer < dog
    c = rabbit < monkey and dog < rabbit
    if a + b + c == 3:
        print(dog, rabbit, cat, monkey, deer)
    
def main():
    '''赛跑排名'''
    for dog in range(1, 6):
        for rabbit in range(1, 6):
            for cat in range(1, 6):
                for monkey in range(1, 6):
                    for deer in range(1, 6):
                        judge(dog, rabbit, cat, monkey, deer)
                        
if __name__ == '__main__':
    main()
