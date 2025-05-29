# 최댓값 : M
# 점수 / M*100

N = int(input())

arr = list(map(int, input().split()))
max_score = max(arr)

new_arr = []
for i in arr:

    i = i / max_score*100
    new_arr.append(i)

plus = 0
for i in new_arr:
    plus += i

print(round(plus/len(new_arr),2))