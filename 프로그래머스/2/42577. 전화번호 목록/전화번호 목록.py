def solution(phone_book):
    answer = True
    
    dict_phone =set(phone_book)

    for number in phone_book:
        for j in range(1, len(number)):
            prefix = number[:j]
            if prefix in dict_phone:
                answer = False
                return answer
    
    return answer