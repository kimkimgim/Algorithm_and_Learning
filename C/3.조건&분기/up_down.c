// 랜덤 수 
// up & down 으로 맞추기 게임

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
srand(time(NULL));
int num = rand() % 100 +1; // 1-100 사이의 숫자
printf("숫자 : %d\n", num);

int answer = 0; //정답
int chance = 5; //기회
while (chance > 0)
{
  printf("남은 기회 %d 번\n", chance--);
  printf("숫자를 맞혀보세요 (1-100) : ");
  scanf("%d", &answer);
  if( answer > num)
  {
    printf("DOWN ↓\n\n");
  }
  else if (answer < num)
  {
    printf("UP \n\n");
  }
  else if (answer == num)
  {
    printf("정답입니다! \n\n");
    break;
  }
  else
  {
    printf("알 수 없는 오류가 발생했어요!\n\n");
  }

  if (chance == 0)
  {
    printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다\n");
    break;
  }
}
return 0;
}



// 실행 명령어 1. 컴파일 후 2. 실행 
//1. gcc up_down.c -o up_down
//2. ./up_down
