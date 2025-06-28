from itertools import permutations

def solution(k, dungeons):

    max_cnt = 0

    for i in permutations(dungeons, len(dungeons)):
        fatigue = k
        cnt = 0
        for min_need, consume in i:
            if fatigue >= min_need:
                fatigue -= consume
                cnt += 1
            else:
                break
        max_cnt = max(max_cnt, cnt)

    return max_cnt