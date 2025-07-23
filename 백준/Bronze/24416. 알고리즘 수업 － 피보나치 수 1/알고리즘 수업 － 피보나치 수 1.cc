#include <iostream>
using namespace std;

int dp[41];
int dpCnt = 0;

int fibo(int n)
{
  if (n == 1 || n == 2)
    return 1;
  
  if(dp[n] != 0)
    return dp[n];
  
  ++dpCnt;  // 계산이 이루어진 시점만 카운트
  dp[n] = fibo(n-1) + fibo(n-2); 
  return dp[n];
}

int main()
{

  int n;
  cin >> n;
  cout << fibo(n) << '\n' << dpCnt << '\n';

  return 0;
}