def solution(sizes):

    new = list(map(lambda x : [max(x), min(x)], sizes))

    width = list(map(lambda x : x[0], new))
    max_width = max(width)

    height = list(map(lambda x : x[1], new))
    max_height = max(height)

    answer = max_width * max_height

    return answer