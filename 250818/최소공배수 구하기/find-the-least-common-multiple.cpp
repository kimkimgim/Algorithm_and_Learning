#include <iostream>

using namespace std;

int n, m;

void lcm(int n, int m)
{
    int max_val = max(n,m);
    while(true)
    {
        if(max_val % n == 0 && max_val % m ==0)
        {
            cout << max_val;
            break;
        }
    max_val++;
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    lcm(n, m);
    return 0;
}