#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    
    if(n/10 >= 1)
    {
        int i = n/10;
        answer = n*12000 + (k-i)*2000;    
    }
    else
    {
        answer = n*12000 + k*2000;
    }
    
    
    return answer;
}