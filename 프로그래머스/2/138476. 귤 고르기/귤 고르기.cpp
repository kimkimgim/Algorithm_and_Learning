#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<int, int> tangerine_cnt;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    
    // 해시로 풀어야하나? 
    for(int tang : tangerine)
    {
        ++tangerine_cnt[tang];
    }
    
    // 최소값 찾기
    // 갯수가 많은 것부터 차례대로 정렬
    vector<int> counts;
    for(auto &c : tangerine_cnt)
    {
        counts.push_back(c.second);
    }
    // greater<int>() : 내림차순정리
    sort(counts.begin(), counts.end(), greater<int>());
    
    int sum = 0;
    for(int cnt : counts)
    {
        sum += cnt;
        ++answer;
        if(sum >= k) break;
    }

    return answer;
}