#include <iostream>
using namespace std;

long long cnt[10]; 
long long point = 1; 

void calc(int num, long long point) {
    // num개의 숫자에 대해 point 자리 아래의 모든 조합 카운트
    while (num > 0) {
        cnt[num % 10] += point;
        num /= 10;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int start = 1;
    int end;
    cin >> end;
    
    while (start <= end) {
        // end의 끝자리를 9로 만들기
        while (end % 10 != 9 && start <= end) {
            calc(end, point);
            end--;
        }
        
        if (end < start) break;
        
        // start의 끝자리를 0으로 만들기
        while (start % 10 != 0 && start <= end) {
            calc(start, point);
            start++;
        }
        
        // 이제 start는 10의 배수, end는 끝자리가 9
        // 이 구간에서 현재 자릿수의 0~9가 각각 (end/10 - start/10 + 1)번 나타남
        long long diff = (end / 10) - (start / 10) + 1;
        for (int i = 0; i < 10; i++) {
            cnt[i] += diff * point;
        }
        
        point *= 10;
        start /= 10;
        end /= 10;
    }
    
    for (int i = 0; i < 10; i++) {
        cout << cnt[i] << " ";
    }
    
    return 0;
}