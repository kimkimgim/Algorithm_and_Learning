#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(auto n : str) cout << n << "\n";
    return 0;
}