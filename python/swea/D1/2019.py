T = int(input())

for i in range(0,T):
    if i == 0:
        result = 1
    else:
        result = result * 2
    print(result, end=' ')