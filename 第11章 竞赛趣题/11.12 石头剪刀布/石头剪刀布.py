'''
程序：剪刀石头布
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def compare(a, b):
    '''比较大小'''
    r = ''
    if a + b == 5:
        if a < b:
            r = 'a'
        else:
            r = 'b'
    if a + b == 7 or a + b == 2:
        if a > b:
            r = 'a'
        else:
            r = 'b'
    return r
                
def main():
    '''剪刀石头布'''
    series_a = [5, 2, 0]     # 小A的出拳规律
    series_b = [5, 0, 5, 2]  # 小B的出拳规律
    boy_a, boy_b = 0, 0      # 小A和小B赢的次数
    i = 0
    while i < 10:            # 比10轮
        a = series_a[i % 3]  # 取出小A的出拳
        b = series_b[i % 4]  # 取出小B的出拳
        r = compare(a, b)    # 比较大小并统计
        if r == 'a':
            boy_a += 1
        if r == 'b':
            boy_b += 1
        i += 1
    print(boy_a, boy_b, sep=' : ')

if __name__ == '__main__':
    main()
