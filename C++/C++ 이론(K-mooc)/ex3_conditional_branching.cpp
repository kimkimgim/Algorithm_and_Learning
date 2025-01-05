#include <iostream>
#include <string>
using namespace std;

int main(){

  int n, nSum = 0;
  for (n=1; n <10; n++)
  {
      // 1에서 6까지 중  홀수만 실행
      if(n>6) break;           // (1)
      if(n%2 == 1) continue;   // 홀수 (2)

      nSum += n;
      cout << "1부터 " + to_string(n) + "까지 짝수 합은 =" << nSum << endl;
  }
  while (n>0)
  // n==7 일때부터 시작
  {
      int nProduct = n * 10;
      cout << n << " x 10 = " << nProduct << endl;
      if(n<6) return 0;  //(3)
      n--;
  }
  cout << "Finish";     //(3)번에 의해 실행되지 못함
  return 0;
}

// 출력
// 1부터 2까지 짝수 합은 =2
// 1부터 4까지 짝수 합은 =6
// 1부터 6까지 짝수 합은 =12
// 7 x 10 = 70
// 6 x 10 = 60
// 5 x 10 = 50