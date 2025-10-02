#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool CompareSize(const vector<int>& a, const vector<int>& b)
{
    return a.size() < b.size();
}

vector<int> solution(string s) {
    vector<int> answer;
    
    // 집합은 순서가 상관없음
    // 스트링을 배열로 바꾸기
    
    // 배열 저장
    vector<vector<int>> arr;
    // 개별저장 후 배열로 보내기
    vector<int> num;
    
    string numstr = "";
    for(char c : s)
    {
        if(c >= '0' && c <= '9')
        {
            numstr += c;
        }
        else
        {
            if(!numstr.empty())
            {
                // num_str 을 숫자로 바꾸고 num으로 옮기기
                num.push_back(stoi(numstr));
                numstr = "";  
            }

            if(c == '}' && !num.empty())
            {
                // num을 최상단으로 옮기기
                arr.push_back(num);
                num.clear();
            }
        }
    }
    
    // 답은 맞았지만 순서때문에 틀렸다고 나와서 작은순으로 정렬하기
    // 와.. 정렬이 단순정렬이 아니라 합크기로 정렬해야함.. 아...
    sort(arr.begin(), arr.end(), CompareSize);
    
    // answer에 넣기
    for(auto& a : arr)
    {
        for(int i=0; i<a.size(); ++i)
        {
            // answer 에 있는지 없는지 확인
            if(find(answer.begin(), answer.end(), a[i]) == answer.end())
            {
                answer.push_back(a[i]);
            }
        }
    }
    
    
    return answer;
}