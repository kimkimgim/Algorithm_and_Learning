#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    
    int cnt = phone_number.size();
    for(int i=cnt - 5; i>=0; --i)
    {
        phone_number[i] = '*';
    }

    return phone_number;
}