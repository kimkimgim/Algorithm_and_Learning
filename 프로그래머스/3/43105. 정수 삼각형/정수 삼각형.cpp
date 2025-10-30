#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    
    int size = triangle.size();
    // 아래에서 올라가기
    for(int i=size-2; i >=0; --i)
    {
        for(int j=0; j<triangle[i].size(); ++j)
        {
            triangle[i][j] += max(triangle[i+1][j], triangle[i+1][j+1]);
        }
    }
    
    answer = triangle[0][0];    
    return answer;
}