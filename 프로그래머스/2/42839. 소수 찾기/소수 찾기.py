from itertools import permutations

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def solution(numbers):
    number_set = set()
    

    for i in range(1, len(numbers)+1):
        for perm in permutations(numbers, i):
            num = int(''.join(perm))
            number_set.add(num) 


    count = 0
    for number in number_set:
        if is_prime(number):
            count += 1

    return count
