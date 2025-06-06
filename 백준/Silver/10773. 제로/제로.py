import sys

K = int(sys.stdin.readline())

stack = []
for _ in range(K):
    n = int(sys.stdin.readline())
    if n == 0:
        stack.pop()
        continue
    else:
        stack.append(n)

result = 0
if stack:
    for i in stack:
        result += i

    print(result)
else:
    print(0)