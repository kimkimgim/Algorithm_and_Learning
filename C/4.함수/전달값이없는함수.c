#include <stdio.h>

// 선언
void function_without_params();


int main(void){

  // 파라미터(전달값)가 없는 함수
  // 함수호출
    function_without_params();

  return 0;
}

// 함수 생성
void function_without_params(){
  printf("전달갑이 없는 함수입니다.");
}

