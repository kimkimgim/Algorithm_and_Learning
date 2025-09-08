#include <vector>
#include <string>
using namespace std;

bool visited[11][11][4];
// 방향    // 상 우 하 좌
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void move(int& x, int& y, int dir, int& cnt)
{
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    
    if(nx<0 || ny<0 || nx >10 || ny > 10) return;
    if(visited[x][y][dir] == 0 && visited[nx][ny][(dir+2)%4] == 0)
    {
        ++cnt;
        visited[x][y][dir] = 1;
        visited[nx][ny][(dir+2)%4] = 1; 
    }
    x = nx;
    y = ny;
}

int solution(string dirs)
{
    int answer = 0;
    
    // 시작지점 
    int x = 5;
    int y =5;
    
    // 처음 간 길만 센다
    // visited 를 시작지점, 도착지점, 방향 그리고 그 반대 방향까지 체크 
    
    for(char c : dirs)
    {
        if(c == 'U') move(x, y, 0, answer);
        else if(c == 'D') move(x, y, 2, answer);
        else if(c == 'R') move(x, y, 1, answer);
        else if(c == 'L') move(x, y, 3, answer);

    }
    
    return answer;
}