#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int N, int number) {
    vector<set<int>> dp(9);

    int num = N;
    for (int i = 1; i <= 8; i++) {
        dp[i].insert(num);
        num = num * 10 + N;
    }

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j < i; j++) {
            for (int a : dp[j]) {
                for (int b : dp[i - j]) {
                    dp[i].insert(a + b);
                    dp[i].insert(a - b);
                    dp[i].insert(a * b);
                    if (b != 0) dp[i].insert(a / b);
                }
            }
        }
        if (dp[i].count(number)) return i;
    }

    return -1;
}

// 2
// NN N+N N-N N/N
// NNN N(N+N) N(N-N) N(N/N) 
// 