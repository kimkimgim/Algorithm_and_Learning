import sys

n, m = map(int, sys.stdin.readline().split())

s = []
def backtracking():

    if len(s) == m:
        print(' '.join(map(str,s)))
        return

    for i in range(1, n+1):
        if len(s) == 0:
            s.append(i)
            backtracking()
            s.pop()

        elif i >= s[-1]:
            s.append(i)
            backtracking()
            s.pop()

backtracking()