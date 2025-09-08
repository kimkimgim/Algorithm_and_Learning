#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> gems) {
    vector<int> answer(2);
    
    // 보석의 종류
    unordered_map<string, int> count;
    
    // 보석 종류 의 수 계산
    int num = 0;
    unordered_map<string, bool> total;
    for(auto &g : gems)
    {
        if(!total[g])
        {
            total[g] = true;
            ++num;
        }
    }
    
    // set 보다 위에가 더 시간복잡도 빠름
    // set<string> s(gems.begin(), gems.end());
    // int num = s.size(); // 전체 보석 종류 수
    
    // 투 포인터
    int start = 0, end = 0;
    int min_len = gems.size() + 1;
 
    while(end < gems.size())
    {
        ++count[gems[end]];
        
        // 모든 보석이 1개씩 있으면 
        while(count.size() == num)
        {
                    // 갱신하기
            if(end - start + 1 < min_len)
            {
                min_len = end - start + 1;
                answer[0] = start + 1;
                answer[1] = end + 1;
            }

            // start 보석 제거 
            count[gems[start]]--;
            if(count[gems[start]] == 0) count.erase(gems[start]);
            ++start;
        }

        // 3. end 증가
        ++end;
            
        }

    
    return answer;
}