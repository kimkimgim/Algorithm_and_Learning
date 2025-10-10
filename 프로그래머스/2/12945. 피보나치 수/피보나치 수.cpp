#include <string>
#include <vector>

using namespace std;

int fibo(int n, vector<int>& memo)
{
    if(memo[n] != -1) return memo[n];
    if(n==0 || n == 1)
    {
        return memo[n] = n;
    }
    else return memo[n] = (fibo(n-1, memo) + fibo(n-2, memo)) % 1234567;        
    
}

int solution(int n) {
    vector<int> memo(n+1, -1);
    int answer = fibo(n, memo);
    
    return answer;
}