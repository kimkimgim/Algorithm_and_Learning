#include <iostream>
#include <vector>
using namespace std;

struct Matrix {
    int row, col;
    vector<vector<int>> data;

    // 생성자: 행(row), 열(col) 초기화
    Matrix(int r, int c) : row(r), col(c), data(r, vector<int>(c)) {}

    // 입력 받기
    void input() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> data[i][j];
            }
        }
    }

    // 출력하기
    void print() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << data[i][j];
                if (j != col - 1) cout << " ";
            }
            cout << '\n';
        }
    }

    // 행렬 곱셈 (A * B)
    Matrix multiply(const Matrix& other) const {
        Matrix result(row, other.col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < other.col; j++) {
                for (int k = 0; k < col; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    Matrix A(N, M);
    A.input();

    int M2, K;
    cin >> M2 >> K;
    Matrix B(M2, K);
    B.input();

    Matrix C = A.multiply(B);
    C.print();

    return 0;
}
