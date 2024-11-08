// for 반복문

#include <stdio.h>
int main(void)
{

// for (선언; 조건; 증감)
  for(int i=1; i <=10; i++)
  // 조건이 맞으면 printf를 수행해라
  printf("Hello World %d\n", i);

  return 0;
}



// 이론
// ++ 연산자
// a++ => 1씩 증가
// <예시> 
//   int b = 20;
//   // 출력하고 더하기
//   printf("b는 %d\n", b++); // 20
//   // 더하고 출력하기
//   printf("b는 %d\n", ++b); // 22
//   printf("b는 %d\n", b);  // 22

