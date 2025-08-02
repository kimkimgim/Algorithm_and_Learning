#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n)
{
    for(int i=0; i < n; ++i)
    {   
        // C++ 은 제거와 동시에 가져오는 것은 없음
        int num = num_list.front();
        
        num_list.erase(num_list.begin());
        
        num_list.push_back(num);
    }
    return num_list;
}
