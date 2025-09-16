#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m;
int arr[501][501];
bool visited[501][501];

            // 상 우 하 좌
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    int cnt = 1;
    
    while(!q.empty())
    {
        auto[cx, cy] = q.front();
        q.pop();
        
        for(int dir=0; dir<4; ++dir)
        {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
        
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(visited[nx][ny] != false || arr[nx][ny] == 0) continue;
        
            visited[nx][ny] = true;
            q.push({nx, ny});
            cnt++;

        }
        
    }

    return cnt;
}

int main()
{
    cin >> n >> m;
    
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    
    // 그림을 확인 연결되었는지
    // 최대 그림 카운드
    // 그림 전체 갯수 확인
    int how = 0;
    int mx = 0;
    
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            if(arr[i][j] == 1 && visited[i][j] == false)
            {
                int num = bfs(i, j);
                mx = max(mx, num);
                ++how;
            }
        }
    }
    
    cout << how << "\n" << mx << "\n";
    
    
    return 0;
}