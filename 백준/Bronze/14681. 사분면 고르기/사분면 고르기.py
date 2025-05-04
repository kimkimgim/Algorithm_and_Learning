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
