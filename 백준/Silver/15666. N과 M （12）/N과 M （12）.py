import sys

n, m = map(int, sys.stdin.readline().split())
s = sorted(list(map(int, sys.stdin.readline().split())))

fin = []
def backtracking():
    if len(fin) == m:
        print(*fin)
        return

    dup = 0
    for i in s:
        if len(fin) == 0:
            if i != dup:
                fin.append(i)
                backtracking()
                dup = fin.pop()

        elif i >= fin[-1]:
            if i != dup:
                fin.append(i)
                backtracking()
                dup = fin.pop()



backtracking()