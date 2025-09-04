#include <string>
using namespace std;

// 방문체크 : 시작지점, 도착지점, 방향
// 아래처럼 선언했기에 -1로 넘어가면 인덱스 에러
bool visited[11][11][4];

// 방향  : 상 우 하 좌
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

// 방향 : dir 
int todir(char dir)
{
    int ret;
    if(dir == 'U') ret = 0;
    else if(dir == 'D') ret = 2;
    else if(dir == 'R') ret = 1;
    else if(dir == 'L') ret = 3;
    
    return ret;
}

// 좌표평면 범위
bool isNotValid(int& nx, int& ny)
{
    return nx < 0 || ny < 0 || nx > 10 || ny > 10 ;
}

// 반대 방향?
int opposite_direction(int dir)
{
    return (dir+2) % 4;
}

int solution(string dirs) {
    int answer = 0;   
    // 시작 
    // 위에서 [11][11] 을선언했기 때문에 마이너스로 넘어가면 에러
    int x=5, y=5;
    
    for(auto c : dirs)
    {
        int dir = todir(c);
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        
        if(isNotValid(nx, ny)) continue;
        
        if(visited[x][y][dir] == false)
        {  
            // (0,0)->(1,0) 과 (1,0) -> (0,0)은 같음
            visited[x][y][dir] = true;
            visited[nx][ny][opposite_direction(dir)] = true;
            answer ++ ;
        }
        
        x = nx;
        y = ny;         
    }

    return answer;
}