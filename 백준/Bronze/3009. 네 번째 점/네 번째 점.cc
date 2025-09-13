#include <iostream>

using namespace std;

int main()
{
  int a1, a2, b1, b2, c1, c2;
  cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

  int d1 = a1^b1^c1;
  int d2 = a2^b2^c2;

  cout << d1 << " "<< d2 << endl;

  return 0;
}