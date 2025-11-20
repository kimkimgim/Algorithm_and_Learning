#include <string>
#include <vector>
#include <iostream>


using namespace std;

int solution(string s) {
    int answer = 0;
    char first = s[0];
    int f = 0;
    int n = 0;

    // 검사가 끝나면 거기서 부터 다시 시작해야하는데 ? 
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i] == first) ++f;
        else ++n;
        
        // 같은 수 
        if( f == n) 
        {
            ++answer;
            if(i+1 < s.size())
            {
                first = s[i+1];
            }
            f = 0;
            n = 0;
        }
    }
    
    if(f != 0 || n != 0) ++answer;
    return answer;
}