#include <string>
#include <vector>
using namespace std;

// position zmffotm
class Position {
public:
    int x, y;

    Position(int x = 0, int y = 0) : x(x), y(y) {}

    // 특정 방향으로 이동했을 때의 새로운 좌표만 계산
    Position moved(int dx, int dy) const {
        return Position(x + dx, y + dy);
    }
};


// board 클래스
class Board {
private:
    vector<string> map;  
    int height;
    int width;

public:
    Board(const vector<string>& park) 
        : map(park), height(park.size()), width(park[0].size()) {}

    // S의 시작 위치 찾기
    Position findStart() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (map[i][j] == 'S') return Position(i, j);
            }
        }
        return Position(0,0);
    }

    // 좌표가 보드 안인지 확인하기
    bool inRange(const Position& p) const {
        return (p.x >= 0 && p.x < height && p.y >= 0 && p.y < width);
    }

    // 이동 경로에 장애물이 있는지 확인
    bool pathClear(const Position& start, int dx, int dy, int steps) const {
        Position cur = start;
        for (int i = 0; i < steps; i++) {
            cur = cur.moved(dx, dy);
            if (!inRange(cur)) return false;
            if (map[cur.x][cur.y] == 'X') return false;
        }
        return true;
    }
};


// walk 클래스
class Walker {
private:
    Position pos;
    Board& board;

public:
    Walker(Board& b) : board(b), pos(b.findStart()) {}


    void move(char dir, int steps) {
        int dx = 0, dy = 0;

        if (dir == 'N') dx = -1;
        if (dir == 'S') dx = 1;
        if (dir == 'W') dy = -1;
        if (dir == 'E') dy = 1;

        if (board.pathClear(pos, dx, dy, steps)) {
            pos = pos.moved(dx * steps, dy * steps);
        }
    }

    Position getPosition() const {
        return pos;
    }
};



vector<int> solution(vector<string> park, vector<string> routes) {
    Board board(park);
    Walker walker(board);

    for (auto& command : routes) {
        char dir = command[0];
        int steps = stoi(command.substr(2));
        walker.move(dir, steps);
    }

    Position p = walker.getPosition();
    return {p.x, p.y};
}
