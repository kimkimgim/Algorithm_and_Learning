#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
// #include <typeinfo>

using namespace std;

int solution(vector<int> sides) {
    
    int sum = 0;
    int maxN = 0;
    
    for(int s : sides)
    {
        sum += s;
        if(s > maxN) maxN = s;
    }

    return (maxN < (sum - maxN)) ? 1 : 2;
}