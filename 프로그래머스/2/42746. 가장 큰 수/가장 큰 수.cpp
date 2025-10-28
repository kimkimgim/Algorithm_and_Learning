#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b)
{
    if(a+b > b+a)
        return true;
    return false;
}
string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> arr;
    for(int n : numbers)
    {
        arr.push_back(to_string(n));
    }
    sort(arr.begin(), arr.end(), compare);
    
    for(string a : arr)
    {
        answer += a;
    }
    
    if(answer[0] == '0') answer = "0";
    
    return answer;
}