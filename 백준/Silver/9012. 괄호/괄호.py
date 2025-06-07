import sys

T = int(sys.stdin.readline())

for _ in range(T):
    parenthesis = list(sys.stdin.readline().rstrip())

    stack = []
    answer = "YES"
    for i in parenthesis:
        if i == '(':
            stack.append(i)

        elif i == ')' and stack:
            stack.pop()

        else:
            answer = "NO"

    if stack:
        answer = "NO"
        print(answer)

    else:
        print(answer)


