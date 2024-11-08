#include <stdio.h>

/*
ssss*
sss**
ss***
s****
*****

별 거꾸로 출력해보기!
*/

int main(void)
{
for (int i = 0; i < 5; i++)
{
  for(int j=i; j <5-1; j++)
  {
    printf("S");
  }
  for(int k=0; k<=i; k++)
  {
    printf("*");
  }
  printf("\n");
}
}