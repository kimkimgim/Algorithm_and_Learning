#include <iostream>
using namespace std;

void print5()
{
    for(int i=0; i<10; ++i)
    {
        cout << "*";
    }
    cout << endl;
}
int main() {
    // Please write your code here.
    for(int i=0; i<5; i++)
    {
        print5();
    }
    return 0;
}