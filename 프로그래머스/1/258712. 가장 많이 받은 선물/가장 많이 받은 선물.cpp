#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    
    int size = friends.size();
    
    unordered_map<string, int> key_index;
    // 서로 주고받은 개수, 선물 지수
    vector<vector<int>> graph(size, vector<int>(size+1, 0));
    // 다음 달 받을 선물 
    vector<int> nextM(size, 0); 
    
    for(int i = 0; i < friends.size(); ++i) 
        key_index[friends[i]] = i; 
    
    for(auto s : gifts) 
    {
        auto end = s.find(' ', 0);
        int to = key_index[s.substr(0, end)];
        int from = key_index[s.substr(end + 1)];
        
        ++graph[to][from]; 
        ++graph[to][size]; 
        
        --graph[from][size]; 
    }
    
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            // 자신 제외하기
            if(i == j) continue; 
            
            // i가 더 많이 선물을 줬을 경우
            if(graph[j][i] < graph[i][j]) ++nextM[i]; 
            else if(graph[j][i] == graph[i][j])
            {
                // 선물 지수 판단
                if(graph[i][size] < graph[j][size]) ++nextM[j]; 
            }
        }
    }
    
    return answer = *max_element(nextM.begin(), nextM.end());
}