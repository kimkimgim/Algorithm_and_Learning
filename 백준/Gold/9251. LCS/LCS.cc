#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int n = A.length();
    int m = B.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[n][m] << '\n'; // LCS의 길이
    return 0;
}
