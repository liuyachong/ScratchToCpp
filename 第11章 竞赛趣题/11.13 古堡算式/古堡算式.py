'''
程序：古堡算式
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''古堡算式'''
    n = 12345
    while n < 98765:
        if len(set(list(str(n)))) == 5: # 判断是否5位数字是否重复 
            p = int(str(n)[::-1])       # 将数字反转
            if p % n == 0:              # 能整除则找到答案
                print(n)
        n += 1
    
if __name__ == '__main__':
    main()
