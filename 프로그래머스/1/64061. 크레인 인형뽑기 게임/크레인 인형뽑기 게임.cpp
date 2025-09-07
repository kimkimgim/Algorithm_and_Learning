#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    // 행렬을 다 스택으로 바꾸기 : 열 크기만큼 스택 생성
    stack<int> lanes[board[0].size()];
    
    // 보드 가장 밑의 행부터 위로 올라가며 순회
    for(int i=board.size()-1; i >= 0; --i)
    {
        for(int j=0; j<board[0].size(); ++j)
        {
            if(board[i][j] !=0)
            {
                lanes[j].push(board[i][j]);   
            }
        }
    }
    
    stack <int> bucket;
    
    // 보드판에서 꺼낸 인형을 답은 bucket
    for(int m : moves)
    {
        // 해당 레인에 인형이 있는가?
        if(lanes[m-1].size())
        {
            int doll = lanes[m-1].top();
            lanes[m-1].pop();
            // 스택이 비어있지 않다면? 그리고 같다면
            if(bucket.size() && bucket.top() == doll)
            {
                // 3개가 터질 수 없음 간과했다..
                bucket.pop();
                answer += 2;
            }
            else
            {
                bucket.push(doll);
            }
            
        }
    }

    
    return answer;
}