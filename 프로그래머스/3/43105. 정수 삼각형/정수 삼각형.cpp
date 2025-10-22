#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 이미 계산한 결과를 다시 쓰는 것.
// bottom-up : 원본값 사라져도 상관없네
// int dp[501][501];

int solution(vector<vector<int>> triangle) {
    
    int n = triangle.size();
    for(int i = n-2; i >= 0; --i)
    {
        for(int j=0; j<triangle[i].size(); ++j)
        {
            triangle[i][j] += max(triangle[i+1][j], triangle[i+1][j+1]);
        }
    }
    
    int answer = triangle[0][0];
    
    return answer;
}