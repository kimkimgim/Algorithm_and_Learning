#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    unordered_map<string, int> ph;
    // 모든 참가자 추가
    for (int i = 0; i < participant.size(); i++)
        ph[participant[i]]++;
    
    // 완주하지 못한 선수 빼기
    for (int i = 0; i < completion.size(); i++) {
        ph[completion[i]]--;

 
    if (ph[completion[i]] == 0)
        ph.erase(ph.find(completion[i]));

    
    }

    return ph.begin() -> first;
}