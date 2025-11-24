#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    int check = 0;
    
    for(char c : cipher)
    {
        if(check == code -1)
        {
            answer += c;
            check = 0;
        }
        else
        {
            ++check;
        }
        
    }

    return answer;
}