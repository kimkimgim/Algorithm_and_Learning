import sys

n, m = map(int, sys.stdin.readline().split())
s = sorted(list(map(int, sys.stdin.readline().split())))

fin =[]
def backtracking():
    if len(fin) == m:
        print(' '.join(map(str,fin)))
        return

    dup = 0
    for i in s:
        if i != dup:
            fin.append(i)
            backtracking()
            dup = fin.pop()

backtracking()