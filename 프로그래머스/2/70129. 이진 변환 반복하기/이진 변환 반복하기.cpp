#include <string>
#include <vector>
#include <algorithm>

using namespace std;

    
string toBin(int l)
{    
    vector<int> temp;
    // 몫, 나머지
    int d, r;
    while(l > 0)
    {
        d = l / 2;
        r = l % 2;
        l = d;
        temp.push_back(r);
    }
    
    // 뒤집기(역순)
    reverse(temp.begin(), temp.end());
    
    // vector를 string으로 변환
    string result = "";
    for(int i = 0; i < temp.size(); i++)
    {
        result += to_string(temp[i]);
    }
    return result;
    
}

vector<int> solution(string s) {
    int transformCount = 0;  // 변환 횟수
    int zeroCount = 0;       // 제거된 0의 개수
    
    while(s != "1")
    {
        // 0 개수 세기
        zeroCount += count(s.begin(), s.end(), '0');
        
        // 특정문자열 0 제거(숫자0 아님!)
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        
        // 이진 변환
        int l = s.size();
        s = toBin(l);
        
        transformCount++;
    }
    
    
    return {transformCount, zeroCount};
}