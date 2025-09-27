#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    int st = 0;
    int end = b + 1;
    int step = 0;
    
    if(n == 1)
    {
        st = 0;
        end = b + 1;
    }
    else if( n == 2)
    {
        st = a;
        end = num_list.size();
    }
    else if( n == 3)
    {
        st = a;
        end = b + 1;
    }
    else if( n == 4)
    {
        st = a;
        end = b + 1;
        step = c;   
    }
    
    if(step == 0)
    {
        answer = vector<int>(num_list.begin() + st, num_list.begin() + end);
    }
    else 
    {
        for(int i = st; i < end; i += c)
        {
            answer.push_back(num_list[i]);
        }
    }
    
    return answer;
}