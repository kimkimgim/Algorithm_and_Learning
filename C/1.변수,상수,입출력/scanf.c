# include <stdio.h>

int main(void)
{

  // scanf
  // 키보드 입력을 받아서 저장
  int input; 
  printf("값을 입력하세요 : ");
  // scanf_s("%d", &input); => vs code에서는 동작하지 않음
  scanf("%d200", &input);
  printf("입력값 : %d\n", input);
  
  int one, two, three;
  printf("3개의 정수를 입력하세요 :");
  scanf("%d %d %d", &one, &two, &three);
  printf("첫번쨰 값 : %d\n", one);
  printf("첫번쨰 값 : %d\n", two);
  printf("첫번쨰 값 : %d\n", three);
  
  return 0;
}

// &
// 내가 input 변수가 정의된 곳의 값을 사용하겠다라는 뜻
// 문자열 입력시에는 필요 없음!