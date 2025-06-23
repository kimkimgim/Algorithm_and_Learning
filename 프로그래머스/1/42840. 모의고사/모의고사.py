# 정답확인
def solution(answers):
    a1 = [1,2,3,4,5]
    a2 = [2,1,2,3,2,4,2,5]
    a3 = [3,3,1,1,2,2,4,4,5,5]

    score = []

    person = [a1, a2, a3]
    for i in person:
        person_score = giveup(i, answers)
        score.append(person_score)

    answer = who_answer(score)
    return answer

# 패턴 확인
def giveup(person, answers):
    count = 0
    for i in range (len(answers)):
        if answers[i] == person[i%len(person)]:
            count += 1
    return count


def who_answer(score):

    max_score = max(score)
    fin_answer = []
    for i in range(len(score)):
        if score[i] == max_score:
            fin_answer.append(i+1)

    return fin_answer