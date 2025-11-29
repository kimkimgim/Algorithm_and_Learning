#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 좌표를 관리하는 값 객체
class Position {
public:
    int x, y;

    Position(int x = 0, int y = 0) : x(x), y(y) {}
};

// 맵의 경계(보드)를 관리하는 클래스
class Board {
private:
    int width;
    int height;

public:
    Board(int w, int h) : width(w), height(h) {}

    // 범위 체크 함수
    bool isInside(const Position& pos) const {
        return pos.x >= -width/2 && pos.x <= width/2 &&
               pos.y >= -height/2 && pos.y <= height/2;
    }
};

// 캐릭터 클래스
class Character {
private:
    Position pos;
    Board& board;   // 캐릭터가 있는 맵

public:
    Character(Board& b) : pos(0, 0), board(b) {}

    // 이동 기능
    void move(const string& dir) {
        Position next = pos;

        if (dir == "left")  next.x -= 1;
        if (dir == "right") next.x += 1;
        if (dir == "up")    next.y += 1;
        if (dir == "down")  next.y -= 1;

        // 보드에게 "여기 이동해도 돼?"라고 물어봄
        if (board.isInside(next)) {
            pos = next;
        }
    }

    Position getPos() const {
        return pos;
    }
};

// 문제 풀이용 함수
vector<int> solution(vector<string> keyinput, vector<int> boardSize) {

    Board board(boardSize[0], boardSize[1]);
    Character c(board);

    for (auto& k : keyinput) {
        c.move(k);
    }

    Position p = c.getPos();
    return {p.x, p.y};
}
