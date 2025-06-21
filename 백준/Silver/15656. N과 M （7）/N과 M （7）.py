import sys

n, m = map(int, sys.stdin.readline().split())
s = sorted(list(map(int, sys.stdin.readline().split())))

fin = []
def backtracking():
    if len(fin) == m:
        print(' '.join(map(str, fin)))
        return

    for i in s:
        fin.append(i)
        backtracking()
        fin.pop()
        
backtracking()

