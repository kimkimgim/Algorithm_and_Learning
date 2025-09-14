#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    int be = numLog[0];
    int cu = numLog[1];
    
    for(int i=1; i<numLog.size(); ++i)
    {
        if(be+1 == cu) answer += 'w';
        else if(be-1 == cu) answer += 's';
        else if(be+10 == cu) answer += 'd';
        else if(be-10 == cu) answer += 'a';
        
        be = cu;
        cu = numLog[i+1];
    }
    return answer;
}