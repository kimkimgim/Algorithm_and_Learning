import sys

N, M = map(int, sys.stdin.readline().split())

arr = []
for n in range(1, N+1):
    arr.append(n)

for _ in range(M):
    i, j = map(int, sys.stdin.readline().split())



    for f in range((j-i+1)//2):
        arr[i-1+f], arr[j-1-f] = arr[j-1-f], arr[i-1+f]

print(*arr)