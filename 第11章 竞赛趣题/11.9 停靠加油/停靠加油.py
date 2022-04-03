'''
程序：停靠加油
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''停靠加油'''
    distance = [50, 80, 39, 60, 40, 32] # 各加油站之间的距离
    flags = [0, 0, 0, 0, 0, 0]          # 设置在加油站停靠加油标记
    mileage = 100                       # 摩托车可行驶的公里数
    
    for i in range(5):
        mileage -= distance[i]          # 到达某个加油站后还能行驶的公里数
        if mileage < distance[i+1] :    # 如果不能到达下一个加油站，则停靠加油
            flags[i] = 1                # 设置加油标记，1为需要加油
            mileage = 100               # 摩托车加满油
            
    print(flags)                        # 输出在各加油站停靠加油情况

if __name__ == '__main__':
    main()
