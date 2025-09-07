#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(int n, int k, vector<string> cmd) {
    string answer = "";
    
    // 삭제된 행의 인덱스 저장
    stack<int> deleted;
    
    // 각 행의 위아래 행의 인덱스 저장
    vector<int> up;
    vector<int> down;
    
    // 맨 위와 아래는 각자 그 위와 아래가 없기 때문에 가상의 공간을 생각하고 N+2만큼 추가
    for(int i=0; i< n+1; i++)
    {
        up.push_back(i-1);
        down.push_back(i+1);
    }
    
    // 임시공간을 고려한 k의 현재 위치
    // 실제 0 -> 1로 미뤘기 때문 앞 뒤로 가상의 공간이 필요하기 때문에
    k++;
    
    for(int i=0; i < cmd.size(); ++i)
    {
        if(cmd[i][0] == 'C')
        {
            deleted.push(k);
            down[up[k]] = down[k];
            up[down[k]] = up[k];
            
            // 더이상 아래에 존재하지 않을 경우
            if(down[k] == n+1)
            {
                k = up[k];
            }
            else 
                k = down[k];            
        }
        
        else if(cmd[i][0] == 'Z')
        {
            int r = deleted.top();
            down[up[r]] = r;
            up[down[r]] = r;
            deleted.pop();
        }
        else
        {
            int sz=stoi(cmd[i].substr(2));
            
            if(cmd[i][0] == 'U')
            {
                for(int j=0; j<sz; ++j)
                {
                    k=up[k];
                }
            }
            else if(cmd[i][0] == 'D')
            {
                for(int j=0; j<sz; ++j)
                {
                    k = down[k];
                }
            }
        }
    }
    
    // 삭제된 행의 위치에 x 넣기
    answer.append(n, 'O');
    while(!deleted.empty())
    {
        answer[deleted.top() - 1] = 'X';
        deleted.pop();
    }
    
    return answer;
}