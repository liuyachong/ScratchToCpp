'''
程序：早餐搭配
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
def main():
    '''早餐搭配'''
    drinks = ['豆浆', '牛奶']
    foods = ['蛋糕', '油条', '饼干', '面包']
    for j in range(2):
        for i in range(4):
            print(drinks[j], foods[i], sep=' + ')

if __name__ == '__main__':
    main()
