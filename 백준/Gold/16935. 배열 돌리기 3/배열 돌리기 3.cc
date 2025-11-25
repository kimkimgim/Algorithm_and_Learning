#include <iostream>
#include <vector>

using namespace std;

#define endl "\n"
#define MAX 100

int N, M, K;
int MAP[MAX][MAX];
int C_MAP[MAX][MAX];
vector<int> V;

void Input() {
    cin >> N >> M >> K;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> MAP[i][j];
        }
    }

    for (int i = 0; i < K; i++) {
        int a;
        cin >> a;
        V.push_back(a);
    }
}

void Print() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << MAP[i][j] << " ";
        }
        cout << endl;
    }
}

void Copy_MAP(int A[][MAX], int B[][MAX]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A[i][j] = B[i][j];
        }
    }
}

/* 1번 명령: 상하 반전 */
void Cmd_One() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C_MAP[N - i - 1][j] = MAP[i][j];
        }
    }
    Copy_MAP(MAP, C_MAP);
}

/* 2번 명령: 좌우 반전 */
void Cmd_Two() {
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            C_MAP[i][M - j - 1] = MAP[i][j];
        }
    }
    Copy_MAP(MAP, C_MAP);
}

/* 3번 명령: 오른쪽 90도 회전 */
void Cmd_Three() {
    int oldN = N;
    swap(N, M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C_MAP[i][j] = MAP[oldN - 1 - j][i];
        }
    }
    Copy_MAP(MAP, C_MAP);
}

/* 4번 명령: 왼쪽 90도 회전 */
void Cmd_Four() {
    int oldM = M;
    swap(N, M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C_MAP[i][j] = MAP[j][oldM - 1 - i];
        }
    }
    Copy_MAP(MAP, C_MAP);
}

/* 5번 명령: 사분면 시계 방향 이동 */
void Cmd_Five() {
    int Half_N = N / 2;
    int Half_M = M / 2;

    // 1 → 2
    for (int i = 0; i < Half_N; i++) {
        for (int j = 0; j < Half_M; j++) {
            C_MAP[i][j + Half_M] = MAP[i][j];
        }
    }

    // 2 → 3
    for (int i = 0; i < Half_N; i++) {
        for (int j = Half_M; j < M; j++) {
            C_MAP[i + Half_N][j] = MAP[i][j];
        }
    }

    // 3 → 4
    for (int i = Half_N; i < N; i++) {
        for (int j = Half_M; j < M; j++) {
            C_MAP[i][j - Half_M] = MAP[i][j];
        }
    }

    // 4 → 1
    for (int i = Half_N; i < N; i++) {
        for (int j = 0; j < Half_M; j++) {
            C_MAP[i - Half_N][j] = MAP[i][j];
        }
    }

    Copy_MAP(MAP, C_MAP);
}

/* 6번 명령: 사분면 반시계 이동 */
void Cmd_Six() {
    int Half_N = N / 2;
    int Half_M = M / 2;

    // 1 → 4
    for (int i = 0; i < Half_N; i++) {
        for (int j = 0; j < Half_M; j++) {
            C_MAP[i + Half_N][j] = MAP[i][j];
        }
    }

    // 4 → 3
    for (int i = Half_N; i < N; i++) {
        for (int j = 0; j < Half_M; j++) {
            C_MAP[i][j + Half_M] = MAP[i][j];
        }
    }

    // 3 → 2
    for (int i = Half_N; i < N; i++) {
        for (int j = Half_M; j < M; j++) {
            C_MAP[i - Half_N][j] = MAP[i][j];
        }
    }

    // 2 → 1
    for (int i = 0; i < Half_N; i++) {
        for (int j = Half_M; j < M; j++) {
            C_MAP[i][j - Half_M] = MAP[i][j];
        }
    }

    Copy_MAP(MAP, C_MAP);
}

void Solution() {
    for (int cmd : V) {
        switch (cmd) {
        case 1: Cmd_One(); break;
        case 2: Cmd_Two(); break;
        case 3: Cmd_Three(); break;
        case 4: Cmd_Four(); break;
        case 5: Cmd_Five(); break;
        case 6: Cmd_Six();  break;
        }
    }
    Print();
}

void Solve() {
    Input();
    Solution();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solve();
    return 0;
}
