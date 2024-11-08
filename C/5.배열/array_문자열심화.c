#include <stdio.h>

int main(void)
{
  char c_array[7] = {'c', 'o','d','i','n','g','\0'};
  printf("%s\n", c_array); //coding

  char c_array_1[6] = {'c', 'o','d','i','n','g'};
  printf("%s\n", c_array_1); //coding�coding

  // 코딩 외에 남는공간도 빈공백으로 출력이 된다.
  char c_array_2[10] = {'c', 'o','d','i','n','g'};
  
  for (int i =0; i < sizeof(c_array_2); i++)
  {
    printf("%c\n", c_array_2[i]);
  }
// c
// o
// d
// i
// n
// g
// 
// 
// 
//

  // ASCII 코드 값 출력(null 문자 0으로 입력됨)
  char c_array_3[10] = {'c', 'o','d','i','n','g'};
  
  for (int i =0; i < sizeof(c_array_3); i++)
  {
    printf("%d\n", c_array_3[i]);
  }

// 99
// 111
// 100
// 105
// 110
// 103
// 0
// 0
// 0
// 0
  return 0;
}