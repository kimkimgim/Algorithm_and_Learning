#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compa(int a, int b)
{
    return a < b;
}
int solution(vector<int> d, int budget) {
    int answer = 0;
    int i = 0;
    
    // while 로 차례대로 주는 것이 아니라 가능한 많이 이기때문에 모든 부서를 검토!
    sort(d.begin(), d.end(), compa);
    
    for(int i=0; i<d.size(); ++i)
    {
        budget = budget - d[i];
        if(budget < 0)
        {
            budget = budget + d[i];
            continue;
        }
        ++answer;
    }
    
    return answer;
}