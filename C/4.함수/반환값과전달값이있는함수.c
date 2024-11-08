#include <stdio.h>


// 선언
int apple(int total, int ate); // 전체 total개에서 먹고 남은 수를 반환한다.


int main(void){

  // 파라미터(전달값)도 받고, 반환값도 있는 함수
  // 함수호출

    //int ret = apple(5, 2); // 5개의 사과 중에서 2개를 먹었어요
    //printf("사과 5개 중에 2개를 먹으면? %d개가 남아요\n", ret);

    // 프린트 f 문에 바로 전달값을 넣을 수 있음!
    printf("사과 %d 개 중에 %d 개를 먹으면? %d 개가 남아요\n", 10, 4, apple(10,4));
  return 0;
}

// 함수 생성
int apple(int total, int ate){
  printf("전닫값과 반환값이 있는 함수 입니다.\n");
  return total - ate;
}

