#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
struct cmp {
    bool operator()(vector<int> a, vector<int> b) {
        return a.at(1) > b.at(1);
    }
};
int solution(vector<vector<int>> jobs) {
    // 작업 번호, 요청시각, 소요시간 을 저장해주는 대기 큐
    
    
    // 1.소요시간 짧은것
    // 2.작업의 요청시간 빠른 것
    // 3.작업의 번호가 작은 것
    
    // 디스크가 작업을 마칠때까지 그 작업만 수행 SJF인가? 
    int answer = 0;
    int timer = 0;
    int nxt_job_idx = 0;
    vector<int> cur_job{0, 0};
    priority_queue<vector<int>, vector<vector<int>>, cmp> pd_job{};
    
    sort(jobs.begin(), jobs.end());
    
    while(jobs.size() > nxt_job_idx || !pd_job.empty())
    {
        // 현재 들어온 작업이 있다면 pd_job에 넣기
        if(jobs.size() > nxt_job_idx)
        {
            if(timer >= jobs[nxt_job_idx][0])
            {
                pd_job.push(jobs[nxt_job_idx]);
                ++nxt_job_idx;
                
                continue; // 같은 시간대에 들어온 작업이 있을 수 있으므로
            }
        }
            
        // 작업 큐에 작업이 있으면 작업 진행
        if(!pd_job.empty())
        {
             // 작업 진행
            timer += pd_job.top()[1];
            
            // 작업 완료
            answer += (timer - pd_job.top()[0]);
            pd_job.pop();
        }
        // 작업 큐에 작업이 없으면 다음 작업 시작 으로 이동
        else
            timer = jobs[nxt_job_idx][0];
    }
    
    // 시간 평균
    answer /= jobs.size();
    
    return answer;
    return answer;
}