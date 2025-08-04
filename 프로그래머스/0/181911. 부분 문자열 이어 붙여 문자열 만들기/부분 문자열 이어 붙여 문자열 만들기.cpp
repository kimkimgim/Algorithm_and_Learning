#include <vector>
#include <string>
using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts)
{
    vector<string> answer;
    
    for(int i=0; i<my_strings.size(); ++i )
    {
        string my = my_strings[i];
        vector<int> part = parts[i];
        string new_word = "";
        
        for (int i=part[0]; i <= part[1]; ++i)
        {
            new_word.push_back(my[i]);
        }
        answer.push_back(new_word);
    }
    
    string answer_fin = "";
    for (int i=0; i < answer.size(); ++i)
    {
        answer_fin += answer[i];
    }
    return answer_fin;
}