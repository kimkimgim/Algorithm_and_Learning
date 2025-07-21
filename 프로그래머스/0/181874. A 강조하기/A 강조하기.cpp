#include <string>
using namespace std;

string solution(string myString) 
    {
        for (char& ch : myString) 
            {
            if (ch == 'a') {
                ch = 'A';  // 소문자 a는 대문자 A로
            } 
            else if (ch >= 'A' && ch <= 'Z' && ch != 'A') 
            {
                ch = tolower(ch);  // A가 아닌 대문자는 소문자로
            }
    }
    return myString;
}
