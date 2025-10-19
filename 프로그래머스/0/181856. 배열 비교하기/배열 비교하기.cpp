#include <string>
#include <vector>
#include <iostream>

using namespace std;

int compare(int a1, int a2)
{
    if(a1 > a2) return 1;
    else if(a1 < a2) return -1;
    else return 0;
}

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    if(arr1.size() == arr2.size())
    {
        int a1 = 0;
        int a2 = 0;

        for(int i=0; i<arr1.size(); ++i)
        {
            a1 += arr1[i];
            a2 += arr2[i];
        }
        cout << a1 << " " << a2;
        answer = compare(a1, a2);
    }
    else
    {
        answer = compare(arr1.size(), arr2.size());
    }
    return answer;
}