# 데코레이터 사용

def check(func):
    def wrapper(answer):
        
        a1 = [1,2,3,4,5]
        a2 = [2,1,2,3,2,4,2,5]
        a3 = [3,3,1,1,2,2,4,4,5,5]

        arr_list = [a1, a2, a3]
        
        
        # 최고/최다 점수를 맞은 사람 찾기
        result = [func(a, answer) for a in arr_list]


        max_cnt = max(result)
        top_students = [i+1 for i, score in enumerate(result) if score == max_cnt]
        return top_students
    return wrapper

@check
def solution(a, answer):
    # 학생 한 명당 점수 계산
    cnt = 0
    for i in range(len(answer)):
        if(a[i%len(a)] == answer[i]):
            cnt += 1
    return cnt

if __name__ == "__main__":
    
    answer = list(map(int, input().split()))
    
    result = solution(answer)
    print(result)