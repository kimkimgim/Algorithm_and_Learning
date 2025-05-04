a , b = map(int, input().split())
c = int(input())

if ((b+c)//60) >= 1:
    T= (a+((b+c)//60))%24
    M= (b+c)%60

else:
    T = (a+(b+c > 60))%24
    M = (b+c)%60

print(T, M)
