def dfs():
    # 종료조건
    if len(s) == M:
        print(*s)       # print(' '.join(map(str,s)))
        return

    for i in range(1, N+1):
        if i not in s:
            s.append(i)
            dfs()
            s.pop()

N, M = map(int,input().split()) # 1부터 N 까지 / 고른 갯수(길이) : M
s = []
dfs()