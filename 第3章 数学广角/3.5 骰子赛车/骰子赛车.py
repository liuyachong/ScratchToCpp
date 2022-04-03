'''
程序：骰子赛车
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
from random import randint

def main():
    '''骰子赛车'''
    car_a, car_b = 0, 0
    for i in range(100):
        dice1 = randint(1, 6)
        dice2 = randint(1, 6)
        dice_sum = dice1 + dice2
        if 4 < dice_sum < 10:
            car_a += 1
        else:
            car_b += 1
    print(car_a, car_b)
    
if __name__ == '__main__':
    main()
