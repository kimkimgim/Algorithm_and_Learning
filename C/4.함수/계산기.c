#include <stdio.h>

// 선언
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
void p(int num);

int main(void)
{

  // 계산기 함수
  // function1 을 간소화
  // 더하기
  int num = 2;
  num = add(num, 3);
  p(num);

  // 빼기
  num = sub(num, 1);
  p(num);

  // 나누기
  num = div(num, 6);
  p(num);

  // 곱하기
  num = mul(num, 3);
  p(num);
  return 0;
}


// 함수 
void p(int num)
{
  printf("num은 %d 입니다\n", num);
}

int add(int num1, int num2)
{
  return num1 + num2;
}

int sub(int num1, int num2)
{ return num1 - num2;
}
int mul(int num1, int num2)
{ return num1 / num2;}

int div(int num1, int num2)
{ return num1 * num2;}