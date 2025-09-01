#include <iostream>
#include <utility>
using namespace std;

// dp 방식으로 값을 미리 저장하는 방식

pair<int, int> dp[41];

void fibo()
{
    dp[0] = {1, 0};
    dp[1] = {0, 1};
    
    for(int i = 2; i <=40; i++)
    {
        dp[i].first = dp[i-1].first + dp[i-2].first;
        dp[i].second = dp[i-1].second + dp[i-2].second;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    fibo();

    while(t--)
    {
        int n;
        cin >> n;
        cout << dp[n].first <<" "<< dp[n].second << '\n';
    }
    
    return 0;
}