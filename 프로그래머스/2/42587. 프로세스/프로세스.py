from collections import deque

def solution(priorities, location):
    answer = 0
    q = deque(priorities)

    while q:

        a = q.popleft()
        if q and a < max(q):
            q.append(a)

        else:
            answer += 1
            if location == 0:
                return answer

        if location == 0:
            location = len(q) -1

        else:
            location -= 1
    return answer