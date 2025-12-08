#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, float>& a, pair<int, float>&  b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    // 도달한 도전자 수
    vector<float> challenger(N+2, 0.0);
    // 도달 했지만 실패한 수
    vector<float> fail(N+2, 0.0);
    
    for(int s : stages)
    {
        for(int i=1; i<=s; ++i)
        {
            if(i == s)
            {
                ++challenger[i];
                ++fail[i];
            }
            else
            {
                ++challenger[i];                
            }
        }
    }
    
    vector<pair<int, float>> failrate(N);
    
    for(int i=0; i<N; ++i)
    {
        failrate[i].first = i+1;
        if(challenger[i+1] == 0)
        {
            failrate[i].second = 0;
        }
        else
        {
            failrate[i].second = fail[i+1]/challenger[i+1];
        }
    }
    
    sort(failrate.begin(), failrate.end(), compare);
    
    for(int i=0; i<N; ++i)
    {
        answer.push_back(failrate[i].first);
    }
        
        
        
    return answer;
}