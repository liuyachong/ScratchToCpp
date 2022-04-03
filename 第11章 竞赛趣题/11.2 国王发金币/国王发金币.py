'''
程序：国王发金币
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''国王发金币'''
    # 金币总数coins、天数days、每次发放金币数num
    coins, days, num = 0, 0, 0 
    while True:
        i = 1
        while i <= num:
            coins += num
            days += 1
            if days == 365:
                print(coins)
                return
            i += 1
        num += 1

if __name__ == '__main__':
    main()
