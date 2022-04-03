'''
程序：复制机器人
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''复制机器人'''
    n = 1
    while True:
        new_gen = n
        total = n
        year = 1
        while year <= 10:
            new_gen = 2 * new_gen - 1
            total = total + new_gen
            year += 1
        if total >= 14340:
            print('最初的机器人数量为', n)
            break
        n += 1
        
if __name__ == '__main__':
    main()
