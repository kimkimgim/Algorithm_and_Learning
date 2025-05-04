arr = list (map(int, input().split()))


if len(set(arr)) == 1:
    print(10000+arr[0]*1000)
elif len(set(arr)) == 2:
     for num in arr:
         if arr.count(num) == 2:
             sum = num
             print(1000+num*100)
             break
else:
    num = max(arr)
    print(num*100)

