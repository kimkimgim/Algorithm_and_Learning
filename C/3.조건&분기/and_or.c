#include <stdio.h>

int main (void)
{
  // && ||
  int a = 11;
  int b = 10;
  int c = 12;
  int d = 12;

  // if ( a==b && c == d)
  // {
  //   printf("a 와 b는 같고, c 와 d도 같습니다\n");
  // }
  // else{
  //   printf("값이 서로 다르네요\n");
  // }


   if ( a==b || c == d)
  {
    printf("a 와 b 혹은 c 와 d가 같습니다\n");
  }
  else{
    printf("값이 서로 다르네요\n");
  }
}