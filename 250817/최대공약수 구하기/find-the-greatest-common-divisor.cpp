#include <iostream>

using namespace std;

int n, m;

void gcd(int n, int m)
{
    while(m != 0)
    {
        int temp = m;
        m = n % m;
        n = temp;
    }
    cout << n;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    gcd(n,m);
    return 0;
}