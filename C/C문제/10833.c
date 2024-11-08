#include <stdio.h>

// 모든 학생들에게 똑같이 나눠주되, 남는 사과의 개수를 최소
// 서로 다른 학교에 속한 학생이 받는 사과의 개수는 다를 수 있음

// 남은 사과의 총 개수 출력

int main(void){

  int school;
  int student;
  int apple;
  int rest = 0;

  scanf("%d", &school); // 학교 수

  // for문을 돌려서 학교의 입력값 받기
  for(int i=0; i < school; i++)
  {
    scanf("%d %d", &student, &apple);
    rest += apple % student;
  }

  printf("%d\n", rest);

  return 0;
}