import sys

n, m = map(int, sys.stdin.readline().split())
s = sorted(map(int, sys.stdin.readline().split()))

fin = []
visited = [0 for _ in range(n)]
def backtracking():
    if len(fin) == m:
        print(*fin)
        return

    dup = 0
    for i in range(n):
        if dup != s[i] and visited[i] == 0:
            fin.append(s[i])
            visited[i] = 1
            backtracking()
            dup = fin.pop()
            visited[i] = 0


backtracking()