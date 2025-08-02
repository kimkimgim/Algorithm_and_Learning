#include <vector>
#include <string>
using namespace std;

vector<string> solution(vector<string> names)
{   
    vector<string> firstList;
    int cnt = 0;
    for (int i=0; i < names.size(); ++i)
    {   
        cnt++;
        if (cnt == 1)
        {
            firstList.push_back(names[i]);
            
        }
        else if (cnt == 5)
        {
            cnt = 0;
        }
    }
    
    return firstList;
}