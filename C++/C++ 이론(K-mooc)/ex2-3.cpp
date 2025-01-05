// 2-5 : char 배열을 이용한 문자열 처리
#include <iostream>
#include <cstdio>
using namespace std;

int main(){

  char strData1 [6] ="Korea"; // 문자열 5개
  char strData2[13] ="우리나라"; // 13byte 메모리중 8byte 데이터 : 4개의 글자 3byte씩 + 마지막 한글자 들어감
  char strData3 [] = "김근식교수님"; // 12 byte 데이터 : 컴퓨터가 자동으로 배열의 크기를 할당하도록 만듬

  cout << "메모리크기="<< sizeof(strData1) << ", " << strData1 << endl;
  cout << "메모리크기="<< sizeof(strData2) << ", " << strData2 << endl;
  cout << "메모리크기="<< sizeof(strData3) << ", " << strData3 << endl;

strData1[0] = 'C'; // 첫번째 문자열 대체
strData1[1] = 'A';  // 원래 글자를 대문자 A로 대체
strData1[2] = 'R';
cout << "메모리크기=" << sizeof(strData1) << ", " << strData1 << endl;

return 0;
}


// 출력결과
// 메모리크기=6, Korea
// 메모리크기=13, 우리나라
// 메모리크기=19, 김근식교수님
// 메모리크기=6, CARea