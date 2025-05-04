H, M = map(int,input().split())


if H != 0 and (M-45) < 0:
    H = H -1
    M = (60+M) -45
    print(H, M)
elif H == 0 and (M-45) < 0:
     H = 23
     M = (60+ M) - 45
     print(H, M)
else:
    M = M - 45
    print(H, M)

10 20


# 숏코딩
# a,b=map(int,input().split())
# print((a-(b<45))%24,(b-45)%60)