import sys
from collections import deque

T = int(sys.stdin.readline())
deq = deque()

for _ in range(T):
    order = list(sys.stdin.readline().split())

    if order[0] == "push":
        deq.append(order[1])

    elif order[0] == "pop":
        if deq:
            a = deq.popleft()
            print(a)
        else:
            print(-1)

    elif order[0] == "size":
        print(len(deq))

    elif order[0] == "empty":
        if deq:
            print(0)
        else:
            print(1)

    elif order[0] == "front":
        if deq:
            print(deq[0])
        else:
            print(-1)

    elif order[0] == "back":
        if deq:
            print(deq[-1])
        else:
            print(-1)

