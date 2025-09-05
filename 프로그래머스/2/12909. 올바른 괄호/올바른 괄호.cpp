#include<string>
#include<stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    
    stack <char> stack;
    for(char c : s)
    {
        if(c == '(') stack.push(c);
        else if(c == ')')
        {
            if(stack.empty()) 
            {
                answer = false;
                break;
            }
            else 
            {
                stack.pop();
            }
        }
            
    }
    if(!stack.empty())
    {
        answer = false;
    }
    cout << answer << endl;

    return answer;
}