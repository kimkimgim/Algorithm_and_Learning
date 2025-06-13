import sys
from collections import deque

N = int(sys.stdin.readline())

ballons = deque(enumerate(map(int,sys.stdin.readline().split()), 1))
result = []

for _ in range(N):


    idx, next_num = ballons.popleft()
    result.append(idx)

    if not ballons:
        break

    if next_num > 0 :
        next_num = -(next_num - 1)

    else:
        next_num = -(next_num)

    ballons.rotate(next_num)


print(*result)



