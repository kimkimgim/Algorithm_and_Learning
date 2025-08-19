#include <string>
#include <vector>

using namespace std;
// 배열, 출력정답, 목표값, 현재 몇번째 숫자를 보고 있는지, 지금까지 계산 합
void dfs(vector<int> &numbers, int& answer, int target, int cnt=0, int current_sum = 0)
{
    // 종료조건
    if(cnt == numbers.size())
    {
        if(current_sum == target)
        {
            answer++;
        }
        return;
     }
    
    dfs(numbers, answer, target, cnt + 1, current_sum + numbers[cnt]);
    dfs(numbers, answer, target, cnt + 1, current_sum - numbers[cnt]);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers, answer, target);
    
    return answer;
}