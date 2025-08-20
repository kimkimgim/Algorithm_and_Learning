#include <string>
#include <vector>
#define MAX 201
using namespace std;

bool isVisited[MAX];   // 컴퓨터 개수만큼

void dfs(int cur, int n, vector<vector<int>> arr)
{
    isVisited[cur] = true;
    
    for(int i=0; i< n; i++)
    {
        if(!isVisited[i] && arr[cur][i] == 1)
        {
            dfs(i, n, arr);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0; i<n; ++i)
    {
        if(!isVisited[i])
        {
            dfs(i, n, computers);
            answer++;
        }
    }
    return answer;
}