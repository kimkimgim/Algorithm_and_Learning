#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int startIndex = -1;
    int endIndex = -2;
    
    int arrL = arr.size();
    
    // 앞에서 검사
    int i = 0;
    while(true)
    {
        // 종료조건 1
        if (i == arrL) break;
        
        // 종료조건 2
        if (arr[i] == 2)
        {
            startIndex = i;
            break;
        }
        
        ++i;
    }
    
    // 뒤에서 검사
    int j = arrL -1;
    
    while(true)
    {
        if(j == -1) break;
        
        if(arr[j] == 2)
        {
            endIndex = j;
            break;
        }
        
        --j;
    }
    
    if(startIndex == -1)
    {
        answer.push_back(-1);
    }
    else 
    {
        for(int i = startIndex; i < endIndex+1; ++i)
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}