#include <iostream>
#include <iostream>

using namespace std;

int N;

void printN(int n)
{   
    string a = "12345^&*()_";
    for(int i = 0; i<n; ++i)
    {
        cout << a << endl;
    }
}
int main() {
    int N;
    cin >> N;

    printN(N);
    
    return 0;
}