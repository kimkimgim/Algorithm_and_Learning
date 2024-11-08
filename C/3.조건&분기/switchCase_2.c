#include <stdio.h>

int main (void)
{
//예시 2 
  // 초등학생(8-13) / 중학생 (14-16)/ 고등학생(17-19)
  // if / else if / else 
  // int age = 25;
  // if (age >= 8 && age <= 16)
  // {
  //   printf("초등학생입니다\n");
  // }
  // else if (age >=14 && age <= 16)
  // {
  //   printf("중학생입니다\n");
  // }
  // else if (age >= 17 && age <= 19)
  // {
  //   printf("고등학생입니다\n");
  // }
  // else
  // {
  //   printf("학생이 아닌가보네요\n");
  // }

  // 위 코드를 switch로 변환
  int age = 14;
  switch(age)
  {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13: printf("초등학생입니다.\n"); break;
    case 14:
    case 15:
    case 16: printf("중학생 입니다.\n"); break ;
    case 17:
    case 18:
    case 19:printf("고등학생 입니다.\n"); break;
    default: printf("학생이 아닌가봐요\n"); break;
  }
 // 위는 조건이 맞으면 그 이후의 것들을 실행시키기 때문에
 // i = 8이면 13까지 실행시키고 break
 // i = 14이면 14부터 16까지 실행시키고 break!
  return 0;
}