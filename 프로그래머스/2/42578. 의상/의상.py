def solution(clothes):
    answer = 0

    cloth = {}
    for kind_name in clothes:
        cloth[kind_name[1]] = cloth.get(kind_name[1], 0) + 1


    if len(cloth) == 1 :
        answer = len(clothes)
        return answer

    count = 1
    for kind in cloth:
        count *= cloth[kind]+1

    answer = count - 1
    
    
    return answer