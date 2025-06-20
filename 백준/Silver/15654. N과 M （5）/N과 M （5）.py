import sys

n,m = map(int, sys.stdin.readline().split())
s = sorted(list(map(int, sys.stdin.readline().split())))

result = []
def backtracking():
    if len(result) == m:
        print(' '.join(map(str, result)))
        return

    for i in s:
        if i not in result:
            result.append(i)
            backtracking()
            result.pop()


backtracking()