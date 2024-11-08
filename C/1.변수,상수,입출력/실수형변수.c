#include <stdio.h>

int main(void)
{
  float f = 46.5f;
  printf("%.2f\n", f);  //46.50

  double d = 4.428;
  printf("%.2lf\n", d);   // 4.43
  return 0;
}


// float
// 숫자 뒤에 꼭 f 출력하기!

// double 
// 더블 역시 float
// 출력은 ' %lf ' 로 표기!

// .2 
// 소수점 둘쨋자리까지 출력