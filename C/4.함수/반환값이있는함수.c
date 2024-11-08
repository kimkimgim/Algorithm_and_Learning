#include <stdio.h>

// 선언
int function_with_return();
void p(int num);

int main(void){

  // 호출
  // 1. function 함수를 호출하고 그 반환값을 int ret 에 저장
  int ret = function_with_return();
  p(ret);

  return 0;
}

  // 2. fucntion 의 retunrn값 = ret 이 매개변수로 전달되면서 함수실행 
void p(int num)
{
  printf("num은 %d 입니다\n", num);
}

int function_with_return(){
  printf("반환값이 있는 함수입니다\n");
  return 10;
}