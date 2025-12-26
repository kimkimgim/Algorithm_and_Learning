def solution(survey, choices):
    answer = ''
    
    # 딕셔너리 컴프리핸션
    score = {c:0 for c in "RTCFJMAN"}
    
    for (left, right), choice in zip(survey, choices):
        
        if choice < 4:
            score[left] += 4 - choice
        elif choice > 4:
            score[right] += choice - 4
    
    for (left, right) in [('R','T'), ('C','F'), ('J','M'), ('A','N')]:
        answer += left if score[left] >= score[right] else right
        
        

    return answer