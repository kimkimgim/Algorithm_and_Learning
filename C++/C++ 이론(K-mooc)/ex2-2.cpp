// cin>> 을 이용한 키보드 데이터 변화
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int nA, nB;
  char chData;
  char strData[6];
  
  cout<<"정수와 문자, 문자열를 입력하세요 : "<<endl; 
  cin>>nA;
  cin>>nB; 
  cin>>chData; 
  cin>>strData;
  
  printf("정수1 = %d, 정수2 =%d, 문자 = %c 문자열 %s\n",
  nA, nB, chData, strData);
  return 0; 
  
  }