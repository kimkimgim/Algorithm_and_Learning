#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {

    set<int> arr;
    
    for(int i =0; i < numbers.size(); ++i)
    {
        for(int j=i+1; j < numbers.size(); ++j)
        {
            arr.insert(numbers[i]+numbers[j]);
        }
    }
    
    vector<int> answer(arr.begin(), arr.end());
    return answer;
}