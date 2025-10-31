#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    int round = 1;
    int groupsize = 2;
    
    // 그룹을 2명씩 묶어서 어디그룹에 있는지 
    while(true)
    {
        // 같은 그룹인지 확인
        // 0 1 => 0 , 1 2 => 1, 3 4 => 2
        if((a-1)/groupsize == (b-1)/groupsize) break;
        
        groupsize *= 2;
        round += 1;
    }
    
    answer = round;
    return answer;
}