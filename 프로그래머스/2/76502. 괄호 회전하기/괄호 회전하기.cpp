#include <string>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

// map : 매번 자동정렬되기 때문에 시간이 더 들음
// unordered_map : 자동정렬이 아니기 때문에 정렬할 필요가 없는 곳에서는 시간을 줄일 수 있음
unordered_map<char, char> brackerPair = {{')','('}, {']','['}, {'}','{'}};

// 문자열은 돌아가면서 변해야 함 그러니 원본을 건드려야함
bool isValid(string& s, int start)
{   
    stack<char> stack;
    unsigned int sz = s.size();
    
    for(int i=0; i<sz; ++i)
    {
        // 시작지점이 하나씩 증가
        // 차례대로 순회하면서 원형을 돌듯이 검사
        char ch = s[(start+i)%sz];
        
        // count : key값이 있으면 1, 없으면 0
        // ch의 값이 key에 있으면 true 없으면 false
        if(brackerPair.count(ch))
        {
            if(stack.empty() || stack.top() != brackerPair[ch] ) return false;
            stack.pop();
        }
        else
        {
            stack.push(ch);
        }
    }
    // 스택이 비어있으면 true;
    return stack.empty();
}


int solution(string s) {
    
    int answer = 0;
    
    // 괄호길이만큼 돌아야함
    for(int i=0; i<s.size(); ++i)
    {
        answer += isValid(s, i);
    }
    
    return answer;
}