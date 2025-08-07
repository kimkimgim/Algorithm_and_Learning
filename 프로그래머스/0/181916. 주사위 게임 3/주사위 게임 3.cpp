#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>    // pow
#include <cstdlib>  // abs
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int dice[4] = {a, b, c, d};
    map<int, int> count;
    
    // 각 숫자의 출현 횟수 카운트
    for (int num : dice) {
        count[num]++;
    }
    
    // 4개 모두 같은 경우
    if (count.size() == 1) {
        answer = 1111 * dice[0];
    }
    // 3개 같거나 2개씩 2쌍인 경우
    else if (count.size() == 2) {
        // 3개 같은 경우와 2개씩 2쌍인 경우 구분
        bool hasThree = false;
        int p = 0, q = 0;
        
        for (auto& pair : count) {
            if (pair.second == 3) {
                hasThree = true;
                p = pair.first;
            } else if (pair.second == 1) {
                q = pair.first;
            } else if (pair.second == 2) {
                if (p == 0) p = pair.first;
                else q = pair.first;
            }
        }
        
        if (hasThree) {
            // 3개 같고 1개 다른 경우: (10 × p + q)²
            answer = pow(10 * p + q, 2);
        } else {
            // 2개씩 2쌍인 경우: (p + q) × |p - q|
            answer = (p + q) * abs(p - q);
        }
    }
    // 2개만 같고 나머지 2개가 각각 다른 경우
    else if (count.size() == 3) {
        vector<int> singles;
        for (auto& pair : count) {
            if (pair.second == 1) {
                singles.push_back(pair.first);
            }
        }
        // q × r (2개의 서로 다른 숫자의 곱)
        answer = singles[0] * singles[1];
    }
    // 모두 다른 경우
    else if (count.size() == 4) {
        answer = *min_element(dice, dice + 4);
    }
    
    return answer;
}