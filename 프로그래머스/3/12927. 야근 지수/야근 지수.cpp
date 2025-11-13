#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    
    // 큐 사용
    priority_queue<int> pq(works.begin(), works.end());
    
    while(n > 0 && !pq.empty())
    {
        // 효율성 실패 원인 : 매번 O*N번만큼 순회하기 때문(자리로 찾음)
        // auto mx = max_element(works.begin(), works.end());
        
        int top = pq.top();
        // cout << top << "나는 TOP!"<< endl;
        pq.pop();
        if(top == 0) break;
        pq.push(top-1);     
        --n;
    }
    
    while(!pq.empty())
    {
        long long w = pq.top();
        // cout << w << " ";
        pq.pop();
        answer += w * w;
    }
    return answer;
}