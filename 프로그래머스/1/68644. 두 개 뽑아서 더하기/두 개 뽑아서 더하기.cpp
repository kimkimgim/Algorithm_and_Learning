#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    
    // 저장하기
    for(int i=0; i<numbers.size(); ++i)
    {
        for(int j=i+1; j<numbers.size(); ++j)
        {
            int k = numbers[i] + numbers[j];
            // cout << numbers[i] << "+" << numbers[j] << "=" << k << endl;
            if(find(answer.begin(), answer.end(), k) == answer.end())
            {
                answer.push_back(k);
            }
        }
    }
  
    // 중복제거
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}