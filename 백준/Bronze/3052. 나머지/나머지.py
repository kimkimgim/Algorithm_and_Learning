import sys

arr = []
for _ in range(10):
    n = int(sys.stdin.readline())
    arr.append(n%42)

answer_arr = []
for i in arr:
    for j in arr:
        if i == j:
            answer_arr.append(i)

print(len(set(answer_arr)))