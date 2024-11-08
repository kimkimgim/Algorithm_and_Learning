#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// 비밀번호 프로젝트

// 선언
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
  // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제
  // 맞히면 통과, 틀리면 실패

  srand(time(NULL));
  int count = 0; // 맞힌 문제의 갯수
  for (int i = 1; i<5; i++)
  {
    // x * y = ?
    int num1 = getRandomNumber(i);
    int num2 = getRandomNumber(i);
    //printf("%d x %d 의 값은 얼마입니까?", num1, num2)

    showQuestion(i, num1, num2);

    int answer = -1;
    scanf("%d", &answer);
    if (answer == -1)
    {
      printf("프로그램을 종료합니다\n");
      // exit: 뒤에 어떤 문장이 오든 프로그램을 바로 끝내라!
      exit(0);
    }
    else if (answer == num1 * num2)
    {
      //성공
      success();
      count++;
    }
    else
    {
      // 실패
      fail();
    }
  }

  printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞혔습니다.\n", count);
  return 0;
}

int getRandomNumber(int level)
{
// rander 함수를 뽑는데 level *7 정의된 수까지 뽑는다!
// level 5 일때는 0 - 35까지 수가 나옴
   return rand() % (level * 7) + 1;
}

// 문제 출제
void showQuestion(int level, int num1, int num2)
{
  printf("\n\n\n######## %d 번째 비밀번호 #########\n", level);
  printf("\n\t%d x %d 는?\n\n", num1, num2);
  printf("\n 비밀번호를 입력하세요(종료:-1)>>");
}


void success(){
  printf("\n >> good! 정답입니다!\n");
}

void fail()
{
  printf("\n >> 땡@ 틀렸습니다.\n");
}