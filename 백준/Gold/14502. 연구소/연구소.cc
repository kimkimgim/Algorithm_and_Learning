#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int n,m, ret;
int arr[10][10], visited[10][10];
vector<pair<int, int>> vir, wallP;

// 방향
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y)
{
  for(int i=0; i<4; ++i)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx <0 || ny < 0 || nx >= n || ny >= m) continue;
    if(visited[nx][ny]) continue;
    if(arr[nx][ny] == 1) continue;
    visited[nx][ny] = 1;
    dfs(nx, ny);
  }
}

int go()
{
  memset(visited, 0, sizeof(visited));
  //바이러스 
  for(pair<int, int> v : vir)
  {
    visited[v.first][v.second] = 1;
    // 탐색
    dfs(v.first, v.second);
  }

  // 바이러스 퍼트리는게 완료되면 0 값 구하기
  int cnt = 0;
  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      if(arr[i][j] == 0 && visited[i][j] == 0) ++cnt;
    }
  }

  return cnt;
}
int main()
{
  cin >> n >> m;

  // 3개의 벽을 세우고
  // 바이러스를 퍼트려야함
  // 바이러스가 퍼지지 않은 나머지를 구함
  // 최대갓 계산

  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      cin >> arr[i][j];
      if(arr[i][j] == 0) wallP.push_back({i,j});
      if(arr[i][j] == 2) vir.push_back({i,j});
    }
  }

  // 벽 세우기
  for(int i=0; i<wallP.size(); ++i)
  {
    for(int j=0; j<i; ++j)
    {
      for(int k=0; k<j; ++k)
      {
        arr[wallP[i].first][wallP[i].second] = 1;
        arr[wallP[j].first][wallP[j].second] = 1;
        arr[wallP[k].first][wallP[k].second] = 1;

        // 바이러스 퍼트는 함수를 통해 안전지대 값을 반환
        ret = max(ret, go());

        arr[wallP[i].first][wallP[i].second] = 0;
        arr[wallP[j].first][wallP[j].second] = 0;
        arr[wallP[k].first][wallP[k].second] = 0;
      }
    }
  }

  // 최종값
  cout << ret << '\n';

  return 0;
}