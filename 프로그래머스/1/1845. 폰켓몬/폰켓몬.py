def solution(nums):
    answer = 0
    monster = {}
    
    total = len(nums)
    take_monster = total//2
    
    for number in nums:
        monster[number] = monster.get(number, 0) + 1
        
    kind = len(monster.keys())
    
    answer = min(kind, take_monster)
    
    
    
    return answer