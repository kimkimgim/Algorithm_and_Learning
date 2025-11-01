#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board)
{
    int answer = 0;
    
    // DP
    int n = board.size();
    int m = board[0].size();
    
    for(int i=1; i<n; ++i)
    {
        for(int j=1; j<m; ++j)
        {
            if(board[i][j] == 1)
            {
                // 왼쪽, 왼쪽위, 위 확인
                // min 3개 이상 {} 중괄호 필수
                board[i][j] = min({board[i-1][j], board[i][j-1], board[i-1][j-1]}) +1;
                answer = max(answer, board[i][j]);
            }
        }
    }
    
        
    // board 전체가 0 인경우
    // 위쪽에서 행과 열의 각 첫번째 줄을 보지 않기 때문에 이 부분 처리해야함
    if(answer == 0)
    {
        for(auto &row : board)
        {
            for(int c : row)
            {
                if(c == 1)
                {
                    answer = 1;
                }
            }
        }
    }

    
    

    return answer * answer;
}