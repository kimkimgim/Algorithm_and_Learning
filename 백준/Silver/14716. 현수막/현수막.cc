#include <iostream>
#include <vector>

using namespace std;

// 방문
vector<vector<bool>> visited(250, vector<bool>(250));
vector<vector<int>> banner(250, vector<int>(250));

// 방향 + 대각선!! 
// 상 상우 우 우하 하 하좌 좌 좌상
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1}; 
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int n,m;

void check(int x, int y)
{
  visited[x][y] = 1;

  for(int i=0; i<8; ++i)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if(nx <0 || nx>=n || ny < 0 || ny >=m) continue;

    if(banner[nx][ny] == 1 && visited[nx][ny] == 0)
    {
      check(nx, ny);
    }
  }
  return;
}

int main()
{
  cin >> n >> m;

  banner.resize(n, vector<int>(m));

  for(int i=0; i<n; ++i)
  {
     for(int j=0; j<m; ++j)
     {
        cin >> banner[i][j];
     }
  }

  int cnt = 0;

  // 재귀
  // 1을 찾으면 계속 확인확인확인 후 최종적으로 돌아오면 1 
  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      if(banner[i][j] == 1 && visited[i][j] == 0)
      {
        check(i, j);
        ++cnt;
      }
    }
  }
  
  cout << cnt << '\n';

  return 0;
}