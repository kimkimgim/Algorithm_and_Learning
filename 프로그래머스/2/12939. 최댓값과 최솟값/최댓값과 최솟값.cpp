#include <string>
#include <vector>
#include <sstream>
#include <algorithm> 

using namespace std;

string solution(string s) {
    string answer = "";
    
    stringstream ss(s);
    vector<int> find_mx;
    string num;               // stringstream 은 int, string 두개만 받을 수 있음
    
    while(ss >> num)          // 공백기준으로 토큰을 분리
    {
        find_mx.push_back(stoi(num));
    }
    
    // int mx = max(find_mx);   // max는 2개의값만 비교 가능 max(a, b) 그래서 불가
    int mx = *max_element(find_mx.begin(), find_mx.end());
    int mi = *min_element(find_mx.begin(), find_mx.end());
    
    answer = to_string(mi) + " " +to_string(mx);
    
    return answer;
}