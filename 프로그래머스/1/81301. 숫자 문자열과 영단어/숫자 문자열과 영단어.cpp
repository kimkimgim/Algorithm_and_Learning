#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


unordered_map<string, int> arr = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

int solution(string s) {
    string answer = "";
    string word = "";
    
    for(char c : s) {
        if(c >= '0' && c <= '9') {    // 숫자를 만나면
            if(!word.empty()) {
                answer += to_string(arr[word]);
                word = "";
            }
            answer += c;
        } else {
            word += c;                // 문자 추가
            if(arr.find(word) != arr.end()) { // 단어 완성되면
                answer += to_string(arr[word]);
                word = "";
            }
        }
    }
    
    return stoi(answer);
}
