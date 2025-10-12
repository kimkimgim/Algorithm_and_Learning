#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> arr;
    
    // 캐시가 0 일경우 
    // 몇 개를 저장하는 것이 아니고 얼마나 걸리느냐
    if(cacheSize == 0)
    {
        return answer = cities.size() * 5;
    }
    
    for(string c : cities)
    {
        // 대소문자 구분 없음
        transform(c.begin(), c.end(), c.begin(), ::tolower);
        
        // 도시 찾기
        auto it = find(arr.begin(), arr.end(), c);
        if(it != arr.end())
        {
            // 있으면 지우고 Push_back 
            // cache hit 1
            // arr.erase(remove(arr.begin(), arr.end(), c), arr.end());
            arr.erase(it);
            arr.push_back(c);
            answer += 1;
            
        }
        else
        {
            // 없으면 맨 뒤 지우고 push_back
            // cache hit 5
            
            // 캐시 사이즈를 넘겼는지도 확인
            if(arr.size() >= cacheSize)
            {
               arr.erase(arr.begin());
            }
            arr.push_back(c);
            answer += 5;
        }
    }
    
    return answer;
}