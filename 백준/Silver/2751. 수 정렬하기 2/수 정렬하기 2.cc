#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);  // C 스타일 입출력과 동기화 비활성화
    cin.tie(NULL);                

    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < N; ++i) {
        cout << numbers[i] << '\n';  // '\n'이 endl보다 빠름
    }

    return 0;
}
