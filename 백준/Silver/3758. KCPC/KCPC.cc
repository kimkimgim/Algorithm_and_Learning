#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Team {
    int id;
    int totalScore;
    int submitCount;
    int lastSubmitTime;
    
    Team() : id(0), totalScore(0), submitCount(0), lastSubmitTime(0) {}
};

bool compare(const Team& a, const Team& b) {
    // 1. 총점이 높은 팀이 우선
    if (a.totalScore != b.totalScore) {
        return a.totalScore > b.totalScore;
    }
    // 2. 제출 횟수가 적은 팀이 우선
    if (a.submitCount != b.submitCount) {
        return a.submitCount < b.submitCount;
    }
    // 3. 마지막 제출 시간이 빠른 팀이 우선
    return a.lastSubmitTime < b.lastSubmitTime;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n, k, t, m;
        cin >> n >> k >> t >> m;
        
        vector<Team> teams(n + 1);
        vector<vector<int>> scores(n + 1, vector<int>(k + 1, 0));
        
        // 팀 아이디 초기화
        for (int i = 1; i <= n; i++) {
            teams[i].id = i;
        }
        
        // 제출 정보 처리
        for (int time = 0; time < m; time++) {
            int teamId, problemId, score;
            cin >> teamId >> problemId >> score;
            
            
            // 여기서 부터 제출 시간.. 갱신.. !!!
            scores[teamId][problemId] = max(scores[teamId][problemId], score);
            teams[teamId].submitCount++;
            teams[teamId].lastSubmitTime = time;
        }
        
        for (int i = 1; i <= n; i++) {
            int total = 0;
            for (int j = 1; j <= k; j++) {
                total += scores[i][j];
            }
            teams[i].totalScore = total;
        }
        
        sort(teams.begin() + 1, teams.end(), compare);
        
        // 우리 팀 순위 찾기
        for (int rank = 1; rank <= n; rank++) {
            if (teams[rank].id == t) {
                cout << rank << '\n';
                break;
            }
        }
    }
    
    return 0;
}