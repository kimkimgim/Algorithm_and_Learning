// for()반복문-2
#include <iostream>
#include <string>
using namespace std;

int main(){
  int n, nSum = 0;
  for(n=5; n>0; n-=2)
  {
    // n=5, n=3, n=1 인경우가 들어옴
    nSum += n;
    cout << "5부터 " +to_string(n) + "까지 합은 = " << nSum << endl;
  }
}

// 출력 
// 5부터 5까지 합은 = 5
// 5부터 3까지 합은 = 8
// 5부터 1까지 합은 = 9