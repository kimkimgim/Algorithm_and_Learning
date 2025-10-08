#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    
    for(int i=left; i<=right; ++i)
    {
        int cnt = 0;
        int l = 1;
        while(l <= i)
        {
            if(i%l == 0)
            {
                ++cnt;
            }
            ++l;
        }
        
        if(cnt % 2 == 0) answer += i;
        else answer -= i;
    }
    return answer;
}