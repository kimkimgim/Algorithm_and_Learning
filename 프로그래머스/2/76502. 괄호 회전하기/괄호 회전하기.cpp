#include <string>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

unordered_map<char, char> bracket = {{')', '('}, {']', '['}, {'}', '{'}};

bool isValid(string &s, int start)
{
    int sz = s.size();
    stack<char> sk;
    
    for(int i=0; i<sz; ++i)
    {
        char c = s[(start+i) % sz];
        // bracket에 c 라는 키가 몇개 있냐?
        if(bracket.count(c))
        {
            if(sk.empty() || sk.top() != bracket[c])
            {
                return false;
            }
            else
            {
                sk.pop();
            }
        }
        else 
        {
            sk.push(c);
        }
            
    }
    return sk.empty();
}


int solution(string s) {
    
    int answer = 0;
    int n = s.size();
    
    for(int i=0; i<n; ++i)
    {
        answer += isValid(s, i);
    }

    return answer;
}