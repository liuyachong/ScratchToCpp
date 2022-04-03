'''
程序：猴子选大王
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''猴子选大王'''
    queue = []                # 创建一个空队列
    for i in range(1, 88+1):  # 将88只猴子编号入列
        queue.append(i)
    num = 1                   # 从1开始报数
    while len(queue) > 1:     # 队列中剩下1个时结束循环
        n = queue.pop(0)      # 将编号出列
        if num % 6 > 0:       # 未报到6的重新入列
            queue.append(n)
        num += 1
    print(queue[0])           # 剩下的一个被选为大王
    
if __name__ == '__main__':
    main()
