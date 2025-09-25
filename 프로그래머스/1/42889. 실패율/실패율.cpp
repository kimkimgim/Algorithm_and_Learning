// 스테이지가 20만이하라고 하니 O(nlogn)가능
// 만약 O(n^2) 은 시간초과 발생
// 컴퓨터는 : 10^8 까지 가능
// 근데 200,000 = 2*10^5
// 이걸 제곱하면 4*10^10 
// 10에 10승은 10에 8승을 훨씬 초과

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// compare 은 bool 이어야함
bool compare(pair<int, float>& a, pair<int, float>& b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    // 전체 스테이지의 개수 n 
    // 사용자가 멈춰있는 스테이지 번호가 담긴 배열 stages
    
    vector<int> answer;
    
    // 스테이지 도달한 적이 있는 도전자의 수
    vector<float> challenger(N+2, 0.0);
    // 스테이지에 도달은 했으나 실패한 도전자의 수
    vector<float> fail(N+2, 0.0);
    
    // 실패한 인원수와 각 스테이지에 도전한 적이 있는 인원수를 구함
    for(int i=0; i<stages.size(); ++i)
    {
        for(int j=1; j<=stages[i]; ++j)
        {
            ++challenger[j];
        }
        fail[stages[i]]++;
    }
    
    // 실패율 저장
    vector<pair<int, float>> failRatio(N);
    
    // 실패율 저장
    for (int i=0; i<N; i++)
    {
        // 스테이지 번호 저장
        failRatio[i].first = i+1;
        
        // 실패율 저장
        if(challenger[i+1] == 0)
        {
            failRatio[i].second = 0;
        }
        else
        {
            failRatio[i].second = fail[i+1] / challenger[i+1];
        }
    }
    
    // 내림차순 정렬
    sort(failRatio.begin(), failRatio.end(), compare);
    
    // 답
    for(int i=0; i<N; ++i)
    {
        answer.push_back(failRatio[i].first);
    }

    
    // 실패율이 높은 스테이지 부터 내림차순으로 반환
    return answer;
}


//시간복잡도 
// challenger 추가하는 첫번째 for문 : O(N*M)
// 실패율 저장 : O(N)
// sort : O(NlogN)

// -> 가장 큰건 O(N*M)
