#include <vector>
using namespace std;

vector<vector<int>> solution(int n)
{
    vector<vector<int>> answer(n, vector<int>(n,0)) ;
    
    // 방향(상 우 하 좌)
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    int x = 0, y = 0;      // 현재 위치 (0,0)
    int dir = 1;           // 방향 인덱스
    int num = 1;           // 1부터 시작
    
    for(int i = 0; i < n*n; ++i)
    {
        answer[x][y] = num++;
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        
        if (nx < 0 || ny < 0 || nx >= n || ny >= n|| answer[nx][ny] != 0)
        {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }
        
        x = nx;
        y = ny;
    }
    
    
    return answer;    
}
        
