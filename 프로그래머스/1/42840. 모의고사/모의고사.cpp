#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> arr3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5,};
    
    vector<int> max_cnt(3,0);
    
    for(int i=0; i < answers.size(); ++i)
    {
        //반복되는 연산을 표현하기 가장 좋은 방법은 나머지 활용
        if(answers[i] == arr1[i%arr1.size()])++max_cnt[0];
        if(answers[i] == arr2[i%arr2.size()])++max_cnt[1];
        if(answers[i] == arr3[i%arr3.size()])++max_cnt[2];
    }
    // 최대값의 위치가 아닌 값을 반환
    int max_score = *max_element(max_cnt.begin(), max_cnt.end());
    
    for(int i=0; i<3; ++i)
    {
        if(max_cnt[i] == max_score)
        {
            answer.push_back(i+1);
        }
    }
    return answer;
}