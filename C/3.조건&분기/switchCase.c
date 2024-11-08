# include <stdio.h>
# include <time.h>
// visual studio에서는 자체적인 컴파일러 설정과 추가 라이브러리를 자동으로 포함하는 경우가 있어서 stdlib.h 없어도 rand() 함수 사용 가능
# include <stdlib.h>

int main(void){
// 가위0 바위1 보2

// 예시 1
// srand 는 현재시간을 초 단위로 매번 다른 난수(랜덤 수)를 반환
//   srand(time(NULL));
//   int i = rand() %3; // 0 -2 반환
//   if (i == 0)
//   {
//     printf("가위\n");
//   }
//   else if (i==1)
// {
//   printf("바위\n");
// }
// else if (i==2)
// {
//   printf("보\n");
// }
// else
// {
//   printf("나는~몰라요\n");
// }


// 예시 2 : switch
// 0-2 반환
// switch(값)
// {
//   case 가위://
//   case 바위://
//   case 보: //
//   default://
// }

srand(time(NULL));
int i = rand() % 3; // 0-2 반환
//int i = 1;
switch (i)
{
  case 0: printf("가위\n"); break;
  case 1: printf("바위\n"); break;
  case 2: printf("보\n"); break;
  default: printf("나는 몰라요\n"); break;
}
  return 0;

  // 주의
  // break문을 주지 않으면 한 번 조건이 맞으면 이후의 값은 보지도 않고 수행
  // 예를 들어 i=1이면 case 0 은 맞지 않아서 pass, case1이 해당되니까 출력, 그리고 이후의 값은 조건을 보지도 않고 출력해버린다!
}