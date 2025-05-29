import sys


N, M =  map(int, sys.stdin.readline().split())

arr = [list(map(int, sys.stdin.readline().split()))for _ in range(2*N)]

new_arr = [[0]*M for _ in range((2*N)//2)]
for i in range((2*N)//2):
    for j in range(M):
        new_arr[i][j] = arr[i][j] + arr[i+(2*N)//2][j]

for na in new_arr:
    print(*na)
