#include <string>
#include <unordered_map>
#include <stack>
using namespace std;

unordered_map<char, char> bp = {{')','('}, {']','['}, {'}','{'}};

bool isValid(string& s, int start)
{
    int sz = s.size();
    stack<char> stk;
    
    for(int i=0; i<sz; ++i)
    {
        // 현재 검사하고 있는 char
        char ch = s[(start + i) % sz];
        
        if(bp.count(ch))
        {
            if(stk.empty() || stk.top() != bp[ch]) return false;
            stk.pop();
        }
        else
        {
            stk.push(ch);            
        }
    }
    return stk.empty();
}

int solution(string s)
{
    int answer = 0;
    
    // 문자열만큼 회전
    for(int i=0; i<s.size(); ++i)
    {
        answer += isValid(s, i);
    }
    return answer;
}