X = int(input())
Y = int(input())

if X < 0 and 0 < Y:
    print(2)
elif 0 < X and 0 < Y:
    print(1)
elif Y < 0  and 0 < X:
    print(4)
elif 0 > X and 0 > Y:
    print(3)

# X < 0 < Y 는 헷갈릴 수 있기 때문에 오답..?