import sys

N = int(sys.stdin.readline())
paper = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]

white = 0
blue = 0

def is_same_color(x, y, size):
    color = paper[x][y]
    for i in range(x, x + size):
        for j in range(y, y + size):
            if paper[i][j] != color:
                return False
    return True

def split(x, y, size):
    global white, blue

    if  is_same_color(x, y, size):
        if paper[x][y] == 0:
            white += 1

        else:
            blue += 1

        return

    new_size = size // 2
    split(x, y, new_size)
    split(x, y+new_size, new_size)
    split(x+new_size, y+ new_size, new_size)
    split(x+new_size, y, new_size)

split(0,0, N)

print(white)
print(blue)