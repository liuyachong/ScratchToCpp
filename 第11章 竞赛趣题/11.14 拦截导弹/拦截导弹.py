'''
程序：拦截导弹
作者：苏秦@小海豚科学馆公众号
来源：图书《趣味编程三剑客：从Scratch迈向Python和C++》
'''
# 导弹的高度
daodan = [389, 207, 155, 300, 299, 170, 158, 65]
# 拦截系统
lanjie = []
    
def lanjie_daodan(h):
    '''拦截导弹并创建系统'''
    j = 0
    while j < len(lanjie):
        if h < lanjie[j] + 1:
            lanjie[j] = h
            return
        j += 1
    lanjie.append(h)

def main():
    '''拦截导弹'''
    i = 0
    while i < 8:
        h = daodan[i]
        lanjie_daodan(h)
        i += 1
    print(len(lanjie))
    
if __name__ == '__main__':
    main()
