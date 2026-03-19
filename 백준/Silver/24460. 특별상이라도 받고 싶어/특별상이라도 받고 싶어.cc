#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> part;

int solve(int n, int x, int y)
{
  if (n == 1) return part[x][y];

  // 4등분
  int h = n/2;
  int a = solve(h, x, y);
  int b = solve(h, x+h, y);
  int c = solve(h, x, y+h);
  int d = solve(h, x+h, y+h);

  vector<int> arr = {a, b, c, d};
  sort(arr.begin(), arr.end());

  return arr[1];
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin >> n;

  part.resize(n, vector<int>(n));

  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<n; ++j)
    {
      cin >> part[i][j];
    }
  }

  cout << solve(n, 0, 0);

  return 0;
}