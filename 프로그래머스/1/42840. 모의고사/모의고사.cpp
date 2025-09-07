#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


int howMany(vector<int> answers , vector<int> arr)
{
    int cnt = 0;
    int as = arr.size();
    for(int i=0; i<answers.size(); i++)
    {
        if(answers[i] == arr[(i)%as])
        {
            ++cnt;
        }
    }
    return cnt;
}
vector<int> solution(vector<int> answers)
{
    vector<int> answer;
    
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> arr3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5,};
    
    int a = howMany(answers, arr1);
    int b = howMany(answers, arr2);
    int c = howMany(answers, arr3);
    
    vector<int> arr = {a, b, c};
    int mx = max({a,b,c});
    
    for(int i=0; i<arr.size(); ++i)
    {
        if(arr[i] == mx) answer.push_back(i+1);
    }
    
    return answer;
}