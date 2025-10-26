#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    
    // 위치를 찾기
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    // 위치에서부터 시작지점이 얼마나 떨어져 있는지 확인
    // vector, array, string 가은 곳에서는 가능
    int distance = it - seoul.begin();
    // cout << distance << "";
    
    string answer = "김서방은 " + to_string(distance) + "에 있다";
    // cout << "김서방은 " << distnace << "에 있다" << " ";
    return answer;
}