#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i=0; i<numbers.size(); ++i)
    {
        for(int j=i+1; j<numbers.size(); ++j)
        {
            int h = numbers[i] + numbers[j];
            auto it = find(answer.begin(), answer.end(), h);
            if(it != answer.end()) continue;
            else
            {
                answer.push_back(h);
            }
        }
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}