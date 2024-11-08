#include <stdio.h>

int main(void)
{
  // 문자 vs 문자열
  char c = 'A';
  printf("%c\n", c);

  // 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함!
  char str[6] = "coding"; //[c][o][d][i][n][g] [\0]
  printf("%s\n", str); // coding�A

  // 그렇기에 위가 아니 아래와 같이 null값이 들어갈 공간도 줘야함!
  char str_1[7] = "coding";
  printf("%s\n", str_1); // coding

  // 문자열 끝을 나타내는 '\0'이 자동으로 포함되어 배열의 길이는 7 이 나옴
  char arr_str[] = "coding";
  printf("%s\n", arr_str); // s를 사용하여 문자열 전체 출력
  printf("%zu\n", sizeof(arr_str)); //7   // d 보다는 zu를 사용하는 것이 안전

   for (int i = 0; i < sizeof(arr_str); i++) {
      printf("%c\n", arr_str[i]);  
//c 
//o 
//d
//i
//n
//g
// 
  }

  char kor[] = "나도코딩";
  printf("%s\n", kor); 
  printf("%zu\n", sizeof(kor)); //13
  // 영어 1글자 : 1 byte
  // 한글 1글자 : 2 byte ??이라고하지만 나는 3Byte가 되는뎅....
  // 

  return 0;
}