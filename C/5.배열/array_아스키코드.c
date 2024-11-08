#include <stdio.h>

int main(void){

  // 참고 : ASCII 코드? ANSI (미국표준협회)에서 제시한 표준 코드 체계
  // 7bit. 총 128개 코드 (0-127)
  // a : 97 (문자 a의 아스키코드 정수값)
  // A : 65
  // 0 : 48

  printf("%c\n", 'a');  // a
  printf("%d\n", 'a');  // 97

  printf("%c\n", 'b');  // b
  printf("%d\n", 'b');  // 98

  printf("%c\n", 'A');  // A
  printf("%d\n", 'A');  // 65

  // NULL, 문자의 끝을 뜯하는 '\0' 역슬러쉬0
  printf("%c\n", '\0');  // 문자형으로는 빈값
  printf("%d\n", '\0');  // 정수형으로는 0

  printf("%c\n", '0');  // 0
  printf("%d\n", '0');  // 48

  printf("%c\n", '1');  // 1 
  printf("%d\n", '1');  // 49


  // 참고2 : 0-127 사이의 아스키코드 정수값에 해당하는 문자 확인
  for (int i=0; i<128; i++){
    printf("아스키코드 정수%d : %c\n", i , i);
  }
  return 0;
}