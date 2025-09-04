#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m, ret;
int arr[10][10];
int visited[10][10];

vector<pair<int, int>> wallPossible, virus;

const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};
// 바이러스 퍼트리기

void dfs(int x, int y)
{
  for(int i=0; i<4; ++i)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx < 0|| ny < 0 || nx >= n || ny >= m) continue;
    if(visited[nx][ny]) continue;
    if(arr[nx][ny] == 1) continue;
    visited[nx][ny] = 1;
    dfs(nx, ny);
  }
}

int go()
{
  memset(visited, 0, sizeof(visited));
  for(pair<int, int> v : virus)
  {
    visited[v.first][v.second] = 1;
    dfs(v.first, v.second);
  }

  // 0 을 세기
  int cnt = 0;
  for(int i=0; i< n; ++i)
  {
    for(int j=0; j <m; ++j)
    {
      if(arr[i][j] == 0 && visited[i][j] == 0) ++cnt;
    }
  }

  return cnt;
}

int main()
{
  // 벽을 3개 세운다
  // 바이러스를 퍼트린다(2 양옆에 0이 있으면 퍼트림)
  // 남은 0의 갯수를 센다.
  // 0의 갯수중 최댓값을 정답
  cin >> n >> m;

  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      cin >> arr[i][j];
      if(arr[i][j] == 0) wallPossible.push_back({i,j});
      if(arr[i][j] == 2) virus.push_back({i,j});
    }
  }


  // 벽을 3개 세우기
  for(int i=0; i<wallPossible.size(); ++i)
  {
    for(int j=0; j < i; ++j)
    {
      for(int k=0; k<j; ++k)
      {
        arr[wallPossible[i].first][wallPossible[i].second] = 1;
        arr[wallPossible[j].first][wallPossible[j].second] = 1;
        arr[wallPossible[k].first][wallPossible[k].second] = 1;

        // 안정영역 수 반환
        ret = max(ret, go());

        arr[wallPossible[i].first][wallPossible[i].second] = 0;
        arr[wallPossible[j].first][wallPossible[j].second] = 0;
        arr[wallPossible[k].first][wallPossible[k].second] = 0;

      }
    }
  }

  cout << ret << '\n';


  return 0;
}