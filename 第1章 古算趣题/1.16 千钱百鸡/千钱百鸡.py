'''
程序：千钱百鸡
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''千钱百鸡'''
    for x in range(1, 21):
        for y in range(1, 34):
            z = 100 - x - y
            if x * 50 + y * 30 + z * 10 / 3 == 1000:
                print(x, y, z, sep=', ')

if __name__ == '__main__':
    main()
