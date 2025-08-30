#include <string>
#include <vector> // 장동으로 메모리가 할당되는 배열
#include <unordered_map> // 파이썬에서 딕셔너리와 비슷

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    unordered_map<string,int> not_completion;
    // vector<string> answer;

    for (string com : completion) not_completion[com]++;
    
    for (string name : participant)
    {
        if(not_completion[name] == 0 ){
            // answer.push_back(name);
            return name;
        }
        not_completion[name]--;
    }
    return "";
}



