#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;                       // 수열 길이 입력
    vector<int> a(n);
    for (int i = 0; i < n; ++i)    // 수열 입력
        cin >> a[i];

    vector<int> lis(n, 1);          // 왼쪽에서 LIS 길이 저장
    vector<int> lds(n, 1);          // 오른쪽에서 LDS 길이 저장 (감소 수열)

    // 정방향 LIS 계산
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i]) {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    // 역방향 LDS 계산
    for (int i = n - 1; i >= 0; --i) {
        for (int j = n - 1; j > i; --j) {
            if (a[j] < a[i]) {
                lds[i] = max(lds[i], lds[j] + 1);
            }
        }
    }

    // 바이토닉 수열 최대 길이 계산
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result = max(result, lis[i] + lds[i] - 1);
    }

    cout << result << "\n";  // 결과 출력
    return 0;
}
