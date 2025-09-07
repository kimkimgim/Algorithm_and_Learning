#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, float>& a, pair<int, float>& b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer;
    
    // 스테이지 도전한 사람
    vector<float> c(N+2, 0.0);
    // 스테이지에 실패한 사람
    vector<float> f(N+2, 0.0);
    for(int i=0; i<stages.size(); ++i)
    {
        for(int j=1; j<=stages[i]; ++j)
        {
            ++c[j];
        }
        ++f[stages[i]];
    }

    // 실패율 계산
    vector<pair<int, float>> fR(N);
    for(int i=0; i<N; ++i)
    {
        fR[i].first = i+1;
        if(c[i+1] == 0)
        {
            fR[i].second = 0;
        }
        else
        {
            fR[i].second = f[i+1]/c[i+1];
        }
    }
    
    // 정렬
    sort(fR.begin(), fR.end(), compare);
        
    // 답
    for(int i=0; i<N; ++i)
    {
        answer.push_back(fR[i].first);
    }

    return answer;
}