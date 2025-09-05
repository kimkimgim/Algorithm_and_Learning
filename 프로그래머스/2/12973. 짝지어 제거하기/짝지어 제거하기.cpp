#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = 1;
    
    stack<char> stk;
    
    for(char c : s)
    {
        // 탑이 지금 들어갈 친구랑 같은가? 
        if( !stk.empty() && stk.top() == c)
        {
            stk.pop();
        }
        else
        {
            stk.push(c);
        }
    }
    
    if(!stk.empty()) answer = 0;
    cout << answer << endl;

    return answer;
}