#include <stdio.h>

int main(void)
{
// while문 밖에서 선언이 필요
int i = 1;
// while(조건)
while(i <= 10){
  printf("Hello World %d\n", i++);
  // i++ 여기에 넣고 위에 i 만 넣어도 됨!
}  
}





// for문과 비교
// for(int i=1; i <=10; i++)
// printf("Hello World\n", i);
// return 0;
