#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int v[15000];
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v, v + n);

    int i = 0, j = n - 1;
    int answer = 0;
    while(i < j) {
        int sum = v[i] + v[j];
        if(sum == m) {
            answer++;
            i++;
            j--;
        }
        else if(sum < m) i++;
        else j--;
    }

    cout << answer << '\n';
    return 0;
}
