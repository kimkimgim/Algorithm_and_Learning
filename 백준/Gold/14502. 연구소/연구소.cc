#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

  // 1. 벽을 3개 세움  => 모든 경우의 수(완전탐색)
  // 2. 바이러스가 퍼지는 로직이 필요
  // 3. 안전영역 카운트 하는 로직 필요

int n, m, ret;
// vector<vector<int>> arr(n,vector<int>(m));
// 조건에서 최대 8*8을 넘지 않는다고 나와있기에
// 동적할당보다는 아래처럼 받는게 빠름
int a[10][10], visited[10][10];
vector<pair<int, int>> wall, vir;

// 방향
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};


void dfs(int x, int y)
{
  for(int i=0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx < 0 || ny < 0 || nx >= n || ny >= m ) continue;
    if(visited[nx][ny]) continue;
    if(a[nx][ny] == 1) continue;
    visited[nx][ny] = 1;
    dfs(nx, ny);
  }
}

// 바이러스를 퍼트리는 함수 
int go()
{
  // 경우의 수마다 초기화
  memset(visited, 0, sizeof(visited));
  for(pair<int, int>a : vir)
  {
    visited[a.first][a.second] = 1;
    dfs(a.first, a.second);
  }
  // 잘돌아갔는지 확인
  //   for(int i=0; i< n; i++)
  // {
  //   for(int j=0; j<m; j++)
  //   {
  //     cout << visited[i][j] << " ";
  //   }
  //    cout << "\n";
  // }
  // 카운팅
  int cnt = 0;
  for(int i=0; i< n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(a[i][j] == 0 && visited[i][j] == 0) cnt++;
    }
  }
  return cnt;
}

int main(){

  cin >> n >> m;

  for(int i=0; i <n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      cin >> a[i][j];
      if(a[i][j] == 0) wall.push_back({i,j});
      if(a[i][j] == 2) vir.push_back({i,j});

    }
  }

  // 3개정도는 중첩 for 문으로 가능
  int l = wall.size();
    for(int i=0; i < l; i++)
    {
      for(int j = 0; j < i; j++)
      {
        for(int k = 0; k < j; k++)
        {
          a[wall[i].first][wall[i].second] = 1;
          a[wall[j].first][wall[j].second] = 1;
          a[wall[k].first][wall[k].second] = 1;
          
          //  go : 안정영역의 수를 반환
          ret = max(ret, go());

          // 다음 경우의 수를 위해 원상복귀
          a[wall[i].first][wall[i].second] = 0;
          a[wall[j].first][wall[j].second] = 0;
          a[wall[k].first][wall[k].second] = 0;
        }
      }
    }

    cout << ret << endl;

  return 0;
}