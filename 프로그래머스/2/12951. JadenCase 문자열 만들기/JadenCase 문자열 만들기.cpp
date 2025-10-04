#include <string>
#include <cctype>         // isdigit, toupper 등등 사용하는데 필요
using namespace std;

string solution(string s) {
    bool isFirst = true;
    
    for(int i=0; i<s.length(); ++i)
    {
        // 시작 부분
        if(isFirst && isalpha(s[i]))
        {
            s[i] = toupper(s[i]);
            isFirst = false;
        }
        else 
        {
            s[i] = tolower(s[i]);
            isFirst = false;
        }
        if(s[i] == ' ') isFirst = true;
        
    }
    
    
    return s;
}