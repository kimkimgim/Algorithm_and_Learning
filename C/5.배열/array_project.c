#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

  srand(time(NULL));
  printf("\n\n === 아빠는 대머리 게임 === \n\n");

  int answer; // 사용자 입력값
  int treatment = rand() %4; // 발모제 선택 (0-3)

  // 병의 갯수를 조합해서 탈모치료제를 만들기!

  int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수 
  int prevCntShowBottle = 0; // 앞 게임에 보여준 병 갯수
  // 서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2개 -> 다음엔 3개...)

  // 3번의 기회 (3번의 발모제 투여 시도)
  for (int i=0; i <=3; i++)
  {
    int bottle[4] = {0, 0, 0, 0}; // 4개의 병
    do {
      cntShowBottle = rand() % 2+2; // 보여줄 병 갯수 (0-1을 보여주고 +2 -> 2, 3 을 보여줌)
      // rand() 는 0부터 rand_max사이의 숫자를 무작위로 반환하는 함수 
      // rand() %2는 숫자가 2로 나눈 나머지가 되어 0 또는 1 을 반환
      // rand() % 2+2 반환하는 0, 1에 +2 를 추가하여 최종결과 2또는 3을 반환

    } while (cntShowBottle == prevCntShowBottle);
    // 2번째 시도에서 현재 선택된 값으로 바뀌어여야지
    // 비교가 됨
    prevCntShowBottle = cntShowBottle;

    int isincluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부
    printf(" >%d 번째 시도 : ", i);

    // 보여줄 병 종류를 선택
    for (int j = 0; j < cntShowBottle; j++)
    {
      int randBottle = rand() % 4; // 0-3
      
      // 아직 선택되지 않은 병이면, 선택 처리
      if (bottle[randBottle] == 0)
      {
        bottle[randBottle] =1;
        // 만약 선택한 보틀이 탈모치료제이면 
        // 포함되었다는 것을 알려줌!
        if (randBottle == treatment)
        {
           isincluded = 1;
        }
      }
      // 이미 선택된 병이면, 중복이므로 다시 선택
      else
      {
          // 이미 선택된 병이기 때문에 위에서 ++ 이 되었기 때문에 j-- 해줘야함
          j--;
      }
    }
      // 사용자에세 문제 표시
      for (int k=0; k<4; k++)
      {
        if(bottle[k] == 1)
          printf("%d", k+1);
      }
      printf("물약을 머리에 바릅니다\n\n");

      // 결과를 보여주기! ㅊ
      if (isincluded == 1)
      {
        printf(" >> 성공 ! 머리가 났어요 ! \n");
      }
      else
      {
        printf(" >> 실패 ! 머리가 나지 않았어요.. ㅠㅠ\n");
      }
      // 첫번째 문제를 시도 후에 다음문제 진행
      printf("\n ... 계속 하려면 아무키다 누르세요...");
      getchar();
  
  }
  // 다하고 나면 
  printf("\n\n 발모제는 몇 번일까요?");
  scanf("%d", &answer);

  // 트리트먼트는 0-3사이의 값
  // 우리에게 보여지는것은 1-4
  if(answer == treatment+1)
  {
    printf("\n >> 정답입니다!\n");
  }
  else

  {
    printf("\n >> 땡! 틀렸어요. 정답은 %d 입니다\n", treatment+1 );
  }
  return 0;
}