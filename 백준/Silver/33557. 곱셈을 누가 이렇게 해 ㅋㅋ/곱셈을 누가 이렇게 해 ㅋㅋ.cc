#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    long long a, b;
    cin >> a >> b;

    long long answer = a * b;

    string sa = to_string(a);
    string sb = to_string(b);
    string wanswer = "";

    // 자리수 맞추기
    if(sa.size() < sb.size()) sa = string(sb.size() - sa.size(), '1') + sa;
    if(sa.size() > sb.size()) sb = string(sa.size() - sb.size(), '1') + sb;


    for(int i=0; i<sa.size(); ++i)
    {
      // ASCII 코드 : '0' 은 48, '1' 은 49 
      int da = sa[i] - '0';
      int db = sb[i] - '0';
      wanswer += to_string(da * db);
    }

    if(answer == stoll(wanswer)) cout << 1 << endl;
    else cout << 0 << endl;

  }

  return 0;
}