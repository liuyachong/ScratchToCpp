'''
程序：换购饮料
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''换购饮料'''
    bottles = int(input('请输入开始买了多少瓶饮料：'))
    caps = bottles
    while caps >= 3:
        exchange = caps // 3
        caps = exchange + caps % 3
        bottles += exchange
    print('一共能喝%d瓶饮料' % bottles)
    
if __name__ == '__main__':
    main()
