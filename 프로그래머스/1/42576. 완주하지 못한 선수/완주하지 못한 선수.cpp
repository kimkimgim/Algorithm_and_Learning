#include <string>
#include <vector> // 장동으로 메모리가 할당되는 배열
#include <unordered_map> // 파이썬에서 딕셔너리와 비슷

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    unordered_map<string,int> not_completion;

    for (string name : completion)
    {
      not_completion[name]++;
    }
    
    for (string name : participant)
    {
      if (not_completion[name] == 0)
      {
          return name;
      }
      not_completion[name]--;
    }
    return "";
}
