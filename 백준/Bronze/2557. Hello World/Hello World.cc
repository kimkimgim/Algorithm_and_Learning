// iostream : input/output stream 의 줄임말로 화면에 출력하거나 입력을 받을때 사용 (아래 std::cout, std:endl 기능 쓰기 위함)
#include <iostream>

// 정수값을 반환한다
// 모든 C++ 프로그램은 반드시 main() 함수를 가져야함
int main()
{
  // 'std::cout' : character output의 줄임말 , 출력 스트림 객체
  // '<<' : 데이터를 cout에 보낸다는 연산자(출력 연산자) 
  // 'std::endl' : 줄바꿈 연산자, '\n'와 같음 
  std::cout << "Hello World!" << std::endl;

  return 0;
}