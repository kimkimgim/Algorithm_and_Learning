#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int nX, nY;
  nX = 635;  // 10진수 값 할당
  nY = 0x635; // 16진수 값 할당

  printf("%d(10), %x(16)\n", nX, nX);
  printf("%d(10), %x(16)\n", nY, nY);
  cout << "------------------------\n";
  cout << dec << nX << "(10), " << hex << nX << "(16)" << endl;

  return 0;

}

// 
// 635(10), 27b(16)
// 1589(10), 635(16)
// ------------------------
// 635(10), 27b(16)