#include <string>
#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>

using namespace std;

// 트리가 만들어져 있지 않기때문에 탐색하면서 만들기
// 다음 차례를 큐에 넣고 빼고

// 한글자만 다른지 확인
bool oneDiff(const string& a, const string& b)
{
    int cnt = 0;
    for(int i=0; i < a.size(); i++)
    {
        if(a[i] != b[i]) cnt++;
        if(cnt > 1) return false;
    }
    return cnt == 1;
}



int bfs(string& begin, string&target, vector<string>& words)
{   
    
    // 기저조건3
    // 배열에 target이 없으면 0 리턴
    if (find(words.begin(), words.end(), target) == words.end())
    {
        return 0;
    }
    
    // 방문체크
    unordered_set<string> visited;
    // 현재 단어, 단계 수 체크
    queue<pair<string, int>> q;
    
    q.push({begin, 0});
    visited.insert(begin);
    
    while(!q.empty())
    {   
        string current = q.front().first;
        int step = q.front().second;
        q.pop();
        
        // 기저조건1 : 타겟을 만나는 순간 멈추기
        if(current == target) return step;
        
        for(auto& word : words)
        {
            if(visited.find(word) == visited.end() && oneDiff(current, word))
            {
                visited.insert(word);
                q.push({word, step + 1});
            }
        }
        
    }
    
    // 기저조건2 : q가 비었는데 타겟이 없으면 0 리턴
    return 0;
    

}

int solution(string begin, string target, vector<string> words) {
    int answer = bfs(begin, target, words);
    // 최단 거리를 구해야하니까 값이 나오면 최솟값을 구해야할것같은데?
    
    return answer;
}