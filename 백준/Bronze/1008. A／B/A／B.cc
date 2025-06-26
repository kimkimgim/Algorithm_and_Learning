#include <iostream>
// setprecision을 쓰기 위함
#include <iomanip> 
using namespace std;

int main()
{
  // double : 소수점이 있는 실수를 저장하기 위한 자료
  double A,B;
  cin >> A >> B;
  // fixed를 넣지않으면 소수점 아래 10자리가 아니라 전체 유효 숫자 10자리가 출력됨
  cout << fixed << setprecision(10) << A / B << endl;

  return 0;
}