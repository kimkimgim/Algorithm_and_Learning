#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a, string &b)
{
    // temp = {"6", "2", "10"}
    if (a + b > b + a)
        return true;
    return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> arr;
    
    // 가능한 모든 수를 만들기
    // 모든 조합을 다 만든다면 시간 초과
    for(int i=0; i<numbers.size(); ++i)
    {
        arr.push_back(to_string(numbers.at(i)));
    }
    
    sort(arr.begin(), arr.end(), compare);
    
    for(int i=0; i< arr.size(); ++i)
    {
        answer += arr.at(i);
    }
    
    if (answer[0] == '0')
    return "0";

    return answer;
}