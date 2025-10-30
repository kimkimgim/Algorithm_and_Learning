#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    int k = friends.size();
    unordered_map<string, int> kakao;
    
    // 친구들 인덱스값 부여
    for(int i=0; i<k; ++i)
    {
        kakao[friends[i]] = i;
    }
    
    // 선물 저장 누가 얼마나 줬는지
    vector<vector<int>> presents(k, vector<int>(k+1, 0));
    
    for(string gi : gifts)
    {
        auto e = gi.find(" ");
        int to = kakao[gi.substr(0, e)];
        int from = kakao[gi.substr(e+1)];
        
        ++presents[to][from];
        ++presents[to][k];
        --presents[from][k];
    }
    
    // 받을 선물의 갯수
    vector<int> next(k, 0);
    
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<k; ++j)
        {
            if(i==j) continue;
            
            if(presents[i][j] > presents[j][i]) ++next[i];
            else if(presents[i][j] == presents[j][i])
            {
                if(presents[i][k] > presents[j][k]) ++next[i];
            }
        }
    }
    
    answer = *max_element(next.begin(), next.end());
    
    
    
    return answer;
}