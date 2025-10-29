#include <string>
#include <vector>

using namespace std;


long long solution(int n) {
    long long answer = 0;

// 재귀는 시간초과 DP 로 풀어야함
//     n = 1 1  => 1
//     n = 2 11 / 2     => 2
//     n = 3 111 / 21 / 12   => 3
//     n = 4 1111 / 211/ 121 / 112 / 22 => 5
//     n = 5 11111 / 2111 /1211 / 1121/ 1112/ 221/ 122/ 212 / => 8
    
    vector<long long> dp(n+1, 0);
    if(n <= 3) return n % 1234567;
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i=3; i<=n; ++i)
    {
        dp[i] = (dp[i-1] + dp[i-2]) % 1234567;
    }

    answer = dp[n];
    
    return answer;
}