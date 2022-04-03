'''
程序：小鱼有危险吗
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    speed = 7     # 小鱼游动速度
    distance = 14 # 探测器与小鱼的初始距离
    detect = 1    # 探测器的检测范围
    fish = 0      # 小鱼游过的距离

    # 小鱼游进探测器的检测范围内
    while fish < distance - detect:
        fish += speed
        speed = speed * 0.98
        
    # 判断小鱼是否能游出探测器的检测范围
    if fish + speed > distance + detect:
        print('N')
    else:
        print('Y')

if __name__ == '__main__':
    main()
