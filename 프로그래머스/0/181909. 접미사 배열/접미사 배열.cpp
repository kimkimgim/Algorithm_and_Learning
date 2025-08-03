#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    int le = my_string.size();
    string pro = "";
    
    for (int i = le - 1; i >= 0; --i)
    {
        pro = my_string[i] + pro;
        answer.push_back(pro);
        
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}