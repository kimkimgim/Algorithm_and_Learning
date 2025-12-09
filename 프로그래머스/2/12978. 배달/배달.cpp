#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// 간선 정보
struct Edge {
    int to, weight;
};

int solution(int N, vector<vector<int>> road, int K) {
    vector<vector<Edge>> graph(N + 1);
    vector<int> dist(N + 1, INT_MAX);

    // 그래프 정보 초기화 (양방향)
    for (vector<int> r : road) {
        int from = r[0];
        int to = r[1];
        int weight = r[2];
        graph[from].push_back({to, weight});
        graph[to].push_back({from, weight});
    }

    // 우선순위 큐를 이용한 다익스트라 알고리즘
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[1] = 0; 
    pq.push({0, 1}); 

    while (!pq.empty()) {
        int current_distance = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

 
        for (Edge& e : graph[current_node]) {
            int next_node = e.to;
            int weight = e.weight;

            if (dist[next_node] > current_distance + weight) {
                dist[next_node] = current_distance + weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }


    int answer = 0;
    for (int i = 1; i <= N; ++i)
        if (dist[i] <= K)
            ++answer;

    return answer;
}