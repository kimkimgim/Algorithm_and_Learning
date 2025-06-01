import math

def solution(progresses, speeds):
    answer = []
     
    # 진도100%까지 걸리는 기간
    duration = []
    for i in range(len(progresses)):
        per = math.ceil((100 - progresses[i]) / speeds[i])
        duration.append(per)

    # 앞에 번호와 비교
    count = 0
    i = 1
    while i < len(duration):
        if duration[i-1] >= duration[i]:
            count += 1
            duration.pop(i)

        elif duration[i-1] < duration[i]:
            count += 1
            answer.append(count)
            duration.pop(i-1)
            count = 0
            pass

    if len(duration) == 1:
        count +=1
        answer.append(count)

        
    return answer