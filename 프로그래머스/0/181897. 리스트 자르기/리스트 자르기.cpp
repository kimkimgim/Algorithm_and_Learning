#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    if(n == 1)
    {
       vector<int> sliced(num_list.begin(), num_list.begin()+b + 1);
       answer = sliced;
    }
    else if (n == 2)
    {
       vector<int> sliced(num_list.begin() + a, num_list.end());
       answer = sliced;
    }
    else if (n == 3)
    {
      vector<int> sliced (num_list.begin() + a, num_list.begin() + b + 1);
      answer = sliced;
    }
    else if (n == 4)
    {
        for(int i=a; i <= b; i += c)
        {
            answer.push_back(num_list[i]);
        }
    }
    
    return answer;
}