#include<stdio.h>

int Add(int right, int left)
{
  return right+ left;
}

int main()
{
  // 라이브러리 : 함수가 만들어져 있음 
  // 단 이건 C언어에서 사용 c++도 사용할 수 있음
  // printf(); , scanf();

  int iData = Add(10, 20);

  //  반복문
  // 1. for 문
  for( /*반복문 초기화*/; /* 반복자 조건 체크(true or false)*/; /*반복자 변경*/ )
  {
  }

  for(int i=0; i < 2; ++i)
  {
    // i=0  부터 시작해서 i < 2 의 조건을 체크하고 // ++ 증감을 하고 다시 반복문 실행
    printf("Output Test\n");

    continue;        // 아래 구문 수행안하고 다시 올라가서 실행 
    break;           // 무조건 만나자마자 반복문 끝
  }

  for (int i = 0; i < 4; i++)
  {
    if (i%2 == 1)
    {
      continue;             // continue를 만나면 아래 printf를 출력하지않고 하나 증가해서 for문 실행
    }
    printf("Output Test\n");
  }

  // 2. while 문
  int i = 0;
  while(/*조건체크*/ i<2)
  {
    printf("Output Test\n");

    ++i;                     // 위 for문을 이렇게 쓸 수 있음

  }
  return 0;
}

// int i 
// for(int i)
//{
//     i.        // 여기서의 i는 for(int i)를 나타냄
//}