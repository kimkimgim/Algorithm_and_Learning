#include <iostream>

using namespace std;

int phi[1001];

void oil()
{
  for(int i=1; i<=1000; i++) phi[i] = i;

  for(int i=2; i<=1000; i++)
  {
    if(phi[i] == i)
    {
      for(int j=i; j<=1000; j+=i)
      {
        phi[j] = phi[j]/i*(i-1);
      }
    }
  }

    
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int c;
  cin >> c;

  // 미리 오일러 피의 법칙에 의해 서로소의 개수를 계산 해놓기(아니면 시간초과발생)
  oil();

  for(int i=0; i<c; ++i)
  {
    int n;
    cin >> n;

    // (0,0), (1,0), (0,1)
    int cnt = 3;

    int ans[1001];
    ans[1] = 3;
    for(int i=2; i<=1000; i++) {
        ans[i] = ans[i-1] + 2*phi[i];
    }

    cout << ans[n] << '\n';

    

    



  }




  return 0;
}

