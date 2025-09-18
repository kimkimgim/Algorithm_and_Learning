#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    
    unordered_map<string, int> parti;
    
    for(string p : participant) ++parti[p];
    
    for(string c : completion)
    {
        --parti[c];
        if(parti[c] == 0)
        {
            parti.erase(parti.find(c));
        }
        
    }

        //end를 쓰지 않는이유는 문제에서 단한명만 남는다고 했기 때문
    return parti.begin() -> first;
}