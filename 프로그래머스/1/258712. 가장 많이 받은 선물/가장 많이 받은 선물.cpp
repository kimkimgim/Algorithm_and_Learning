#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    
    // 같으면 선물지수가 작은 사람이 큰사람에게
    // 주고 받은 적이 없거나 같으면 
    // 선물 지수 = 준 선물 - 받은 선물
    // 선물 지수도 같다? 주고 받지 않음
    
    int size = friends.size();
    // 각 친구들의 인덱스 지정
    unordered_map<string, int> kakao;
    
    // 서로 주고받은 선물
    vector<vector<int>> graph(size, vector<int>(size+1, 0));
    
    // 다음달에 받을 선물
    vector<int> next(size, 0);
    
    // 친구들 인덱스 지정
    for(int i=0; i<size; ++i)
    {
        kakao[friends[i]] = i;
    }
    
    
    for(string g : gifts)
    {
        auto pos = g.find(' ');
        int to = kakao[g.substr(0, pos)];
        int from = kakao[g.substr(pos+1)];
        
        // 준 사람 / 받은사람 그래프
        ++graph[to][from];
        // 선물지수
        ++graph[to][size];
        --graph[from][size];
    }
    
    for(int i=0; i<size; ++i)
    {
        for(int j=0; j<size; ++j)
        {
            if(i == j) continue;
            
            if(graph[i][j] > graph[j][i]) ++next[i];
            else if(graph[i][j] == graph[j][i])
            {
                if(graph[i][size] > graph[j][size]) ++next[i];
            }
            
        }
    }
    
    
    return answer = *max_element(next.begin(), next.end());
}