#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mat[4][4];

    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            cin >> mat[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < i+1; ++j) {
            sum += mat[i][j];
        }
    }
    cout << sum << '\n';
    return 0;
}