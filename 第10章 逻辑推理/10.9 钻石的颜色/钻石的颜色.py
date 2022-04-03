'''
程序：钻石的颜色
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def judge(box1, box2, box3, box4, box5):
    '''判断钻石的颜色'''
    a = (box2 == 5) + (box3 == 4)
    b = (box2 == 2) + (box4 == 1)
    c = (box1 == 1) + (box5 == 3)
    d = (box3 == 2) + (box4 == 3)
    e = (box2 == 4) + (box5 == 5)
    if a == 1 and b == 1 and c == 1 and d == 1 and e == 1:
        print(box1, box2, box3, box4, box5)
    
def main():
    '''钻石的颜色'''
    for box1 in range(1, 6):
        for box2 in range(1, 6):
            for box3 in range(1, 6):
                for box4 in range(1, 6):
                    box5 = 15 - box1 - box2 - box3 - box4
                    judge(box1, box2, box3, box4, box5)
                    
if __name__ == '__main__':
    main()
