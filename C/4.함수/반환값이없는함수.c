# include <stdio.h>

// 선언
void function_without_return();

int main(void){

  // 함수 종류:
  // 1. 반환 값이 없는 함수
  // 주의 앞에 void 등을 넣어버리면 선언임! 함수 호출이 아니다!
  function_without_return();

  return 0;
}

void function_without_return(){
  printf("반환 값이 없는 함수 입니다.\n");
}