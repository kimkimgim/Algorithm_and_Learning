#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) 
{
    vector<int> answer;
    for (const string& str : intStrs)              // 메모리 전략
    {
       int num = stoi(str.substr(s, l));           // string 을 int 로 바꾸기
       if (num > k) answer.push_back(num);
    }
    
    return answer;
}