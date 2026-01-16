#include <string>
#include <vector>
#include <sstream>

using namespace std;

int toSec(string t) {
    istringstream ss(t);
    int m, s;
    char c;
    ss >> m >> c >> s;
    return m * 60 + s;
}

string toTime(int sec) {
    int m = sec / 60;
    int s = sec % 60;
    return (m < 10 ? "0" : "") + to_string(m) + ":" +
           (s < 10 ? "0" : "") + to_string(s);
}



string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    // prev : 현재에서 -10 (단, 10초 미만은 처음위치) -> 시작위치가 오프닝인가 아님 오프닝 다음부터인가
    // next : 10초 후 (단, 남은 시간이 10초 미만일 경우 마지막 위치로 이동)
    // 오프닝 건너뛰기 : 현재위치가 op_start 와. op_end 사이일 경우 op_end 위치로 이동
    
    
    
    // 시작하기 전 현재위치가 어디인지 미리 계산 (뒤쪽에서 남은부분인가 오프닝 위치인가 등등)
    int total = toSec(video_len);
    int cur   = toSec(pos);
    int op_s  = toSec(op_start);
    int op_e  = toSec(op_end);
    
        
    // 시작 위치가 오프닝이면 건너뛰기
    if (cur >= op_s && cur <= op_e)
        cur = op_e;
    
    for(string c : commands)
    {
        // 현재위치가 처음 10초 미만인가?
        // 현재위치가 남은 10초 미만인가?
        // 중간위치 
        if (c == "next") {
            cur += 10;
            if (cur > total) cur = total;
        }
        else if (c == "prev") {
            cur -= 10;
            if (cur < 0) cur = 0;
        }

        // 이동 후 오프닝 구간 체크
        if (cur >= op_s && cur <= op_e)
            cur = op_e;
    }
    
    
    return toTime(cur);
}