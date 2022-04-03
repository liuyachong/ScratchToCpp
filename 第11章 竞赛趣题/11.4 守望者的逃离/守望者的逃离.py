'''
程序：守望者的逃离
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''守望者的逃离'''
    mp = 39           # 魔法值
    distance = 200    # 逃亡距离
    time =  9         # 沉没时间
    a = 0             # 守望者的移动距离
    b = 0             # 闪烁法术的移动距离
    i = 1
    while i <= time:
        a += 17       # 守望者的跑步速度为17m/s
        if mp > 9:
            mp -= 10  # 每次使用闪烁法术消耗魔法值10点
            b += 60   # 用闪烁法术的移动速度为60m/s
        else:
            mp += 4   # 魔法值的恢复速度为4点/s
        if b > a:
            a = b
        if a >= distance:
            print('Yes, ', i)
            return
        i += 1
    print('No, ', a)

if __name__ == '__main__':
    main()
