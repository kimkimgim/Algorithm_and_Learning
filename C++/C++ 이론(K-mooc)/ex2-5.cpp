// string.h함수를 이용한 문자열 처리
#include <iostream>
// string 헤더파일 사용
#include <cstring> //또는 #include <string.h>, Visual studio에서 생략가능
using namespace std;


int main(){

  char strData1[] = "대한민국";
  cout << "메모리크기=" << sizeof(strData1) << ", " << strData1 << endl;

  char strData2[6];
  strcpy(strData2, "Korea"); //strData2 문자열 변수에 문자열 입력 //visual studio 에서는 strcpy_s 이지만 여긴 아님!
  cout << "메모리크기=" << sizeof(strData2) << " , " << strData2 << endl;

  char strData3[12] = "Car";
  strcat(strData3, strData2); // 문자열이어 붙임
  cout << "메모리크기=" << sizeof(strData3) << " , "<< strData3 << endl ;
  
  return 0;
}

// 출력결과
// 메모리크기=13, 대한민국
// 메모리크기=6 , Korea
// 메모리크기=12 , CarKorea