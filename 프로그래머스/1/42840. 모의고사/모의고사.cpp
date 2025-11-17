#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> arr3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5,};
    
    vector<int> arr(3);
    

    for(int i=0; i<answers.size(); ++i)
    {
        if(answers[i] == arr1[i%arr1.size()]) ++arr[0];
        if(answers[i] == arr2[i%arr2.size()]) ++arr[1];
        if(answers[i] == arr3[i%arr3.size()]) ++arr[2];

    }
    
    int maxScore = max({arr[0], arr[1], arr[2]});
    for(int i=0; i<arr.size(); ++i)
    {
        if(arr[i] == maxScore) answer.push_back(i+1);
    }

    
    return answer;
}