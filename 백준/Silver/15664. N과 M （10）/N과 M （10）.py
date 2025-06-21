import sys

n, m = map(int, sys.stdin.readline().split())
s = sorted(list(map(int, sys.stdin.readline().split())))

fin = []
visited = [0 for _ in range(n)]
def backtracking():
    if len(fin) == m:
        print(*fin)
        return

    dup = 0
    for i in range(n):
        if len(fin) == 0:
            if dup != s[i] and visited[i] == 0:
                fin.append(s[i])
                visited[i] = 1
                backtracking()
                dup = fin.pop()
                visited[i] = 0

        elif s[i] >= fin[-1]:
            if dup != s[i] and visited[i] == 0:
                fin.append(s[i])
                visited[i] = 1
                backtracking()
                dup = fin.pop()
                visited[i] = 0


backtracking()