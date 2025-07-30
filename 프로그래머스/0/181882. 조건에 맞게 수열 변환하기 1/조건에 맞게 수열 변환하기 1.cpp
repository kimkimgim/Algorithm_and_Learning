#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr)
{   
    vector<int> fin;
    for(int i = 0; i < arr.size(); ++i)
    {   
        if (arr[i] >= 50 && arr[i] % 2 == 0)
        {
            fin.push_back(arr[i] / 2);
        }
        else if (arr[i] < 50 && arr[i] % 2 != 0)
        {
            fin.push_back(arr[i]*2);
        }
        else
        {
            fin.push_back(arr[i]);
        }
    }
    
    return fin;
}