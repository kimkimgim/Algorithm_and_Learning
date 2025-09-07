#include <string>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    // 공백 기준으로 단어를 읽기
    istringstream iss(s);
    string word;
    
    stack<int> stack;
    
    while(iss >> word) // 공백기준으로 단어를 분리
    {
        if(word == "Z" && stack.size())
        {
            stack.pop();
        }
        else
        {
            int num = stoi(word);
            stack.push(num);
        }
    }

    while(stack.size())
    {
        answer += stack.top();
        stack.pop();
    }
    return answer;
}