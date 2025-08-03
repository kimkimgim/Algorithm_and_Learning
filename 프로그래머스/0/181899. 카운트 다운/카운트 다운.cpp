#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num)
{
    vector<int> answer;
    
    int i = start_num;
    while(i >= end_num)
    {
        answer.push_back(i);
        --i;
    }
    return answer;
}