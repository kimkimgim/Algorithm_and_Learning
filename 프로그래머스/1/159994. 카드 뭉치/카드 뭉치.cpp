#include <string>
#include <vector>
#include <queue>

using namespace std;

queue<string> que(vector<string>& cards)
{
    queue<string> q;
    for(string card : cards)
    {
        q.push(card);
    }
    return q;
}
string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    
    
    // 카드를 사용하지 않고 다음 으로 넘어갈 수 없음
    // 비교해야겠네
    
    // goal 에 있는 단어를 꺼내서
    // cards1 혹은 cards2랑 같은지. 비교하고 둘다 그럼 큐에 넣어야하나
    
    queue<string> q1 = que(cards1);
    queue<string> q2 = que(cards2);
    queue<string> go = que(goal);
    
    while(go.size())
    {
        if(go.front() == q1.front())
        {
            q1.pop();
            go.pop();
        }
        else if(go.front() == q2.front())
        {
            q2.pop();
            go.pop();
        }
        else
        {
            answer = "No";
            break;
        }
    }
    
    if(go.empty())
    {
        answer = "Yes";
    }


    
    
    return answer;
}