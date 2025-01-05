// #define _CRT_SECURE_NO_WARNINGS // 보안상이유로 사용! // scanf,strcpy 사용시 보안경고 비활성화! 
// but maxOS 에서는 필요없음!

// scanf()함수를 이용한 키보드 데이터 입력
#include <iostream>
#include <cstdio>
using namespace std;

int main (){

  // C언어와 다르게! 정수형, 문자형이 아닌 메모리 개념으로 기억하기!★
  int nA, nB;      // 32bit 메모리 변수 2개 선언
  char chData;     // 8bit 메모리 변수 1개 선언 // 캐릭터는 8bit
  char strData[6]; // 8bit문자 5개 저장 변수 선언 // 마지막은 문자와 문자를 구분!
  printf(" 정수와 문자, 문자열을 입력하세요\n"); 
  scanf("%d %d %c %s", &nA, &nB, &chData, strData);   
  // Q&A : &strData 강사님은 이렇게 알려주셨지만 나는 오류가 남! 왜? 배열이기 때문에! 배열의 이름은 이미 주소를 나타내기 때문!
  printf("정수1 = %d, 정수2= %d, 문자 = %c 문자열 %s\n", nA, nB, chData, strData );

  return 0;
}
//입력값 예시 
// 10
// 20
// a 
// Korea
// 아니면 10 20 a korea 이것도 가능