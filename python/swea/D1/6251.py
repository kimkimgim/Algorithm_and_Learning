# 풀이1
star="*"
for i in range(1,6):
    print(f'{star * i:>5}')

# 풀이2
infor="!"
bin = " "
for i in range(1,6):
    print(f"{bin*(5-i)}{infor*i}")