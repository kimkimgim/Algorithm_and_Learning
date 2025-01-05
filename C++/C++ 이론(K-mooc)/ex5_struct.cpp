// 4-1 : 구조체 기본
#include <iostream>
using namespace std;

struct Score             // 구조체 Score 선언
{
  const char* strName;    // 멤버 변수 : 구조체 내부에 들어간 변수명
  int nKor;
  int nEng;
  int nMath;
  double fAverage;       //실수형 멤버변수
};

int main()
{
  struct Score Student1;
  struct Score *pStudent2 = new struct Score;   //new 연산자 사용해서 동적으로 객체 생성

  // 구조체 객체 사용/해제(기본) - 정적객체 사용(객체명.멤버변수)
  Student1.strName = "KsKim";   
  Student1.nKor=90;
  Student1.nMath = 95;
  Student1.nEng = 100;

  // 구조체 객체 사용/해제(기본) - 동적객체 사용(객체명->멤버변수)
  pStudent2->strName="UsChoi";
  pStudent2->nKor=85;
  pStudent2->nEng=95;
  pStudent2->nMath=100;
}