// Switch-case 제어문
#include <iostream> 
using namespace std;

int main()
{
  int nNumber;     
  cout << "0에서 5까지 숫자를 입력하세요 : ";
  cin >> nNumber;    // 0-5까지 숫자를 입력받는 곳
  cout << "input value = " << nNumber << endl;

  switch (nNumber) // 조건 변수의 값은 정수형 데이터 또는 문자
  {                // case문이 여러개라 하더라도 중괄호 {} 생략 가능
  case 0: cout << "0. 미래의 자동차 산업은 \n";
  case 1: cout << "1. 지능제어 기술이 지배합니다 \n";
  case 2: cout << "2. 꿈이 있는 젊은이가\n";
  case 3: cout << "3. 우리나라의 미래입니다.\n";
  default: cout << "4. 모두 화이팅해요. \n";         // 일치하는 case 변수 값이 없으면 default 실행
  }                                              
return 0;
}

// 출력
// 뒤에 break가 없기 때무넹 2 가 실행되면 그 뒤에 모든 게 실행됨!! 
// input value = 3
// 3. 우리나라의 미래입니다.
// 4. 모두 화이팅해요. 