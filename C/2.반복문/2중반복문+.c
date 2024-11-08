# include <stdio.h>

/*
출력해보기!
*
**
***
****
*****
******
*/
int main(void){
  // for(int i=1; i<=6; i++){
  //   for(int j=0; j<=i+j; j++){
  //     printf()
  //   }
  // }
  
  for(int i = 0; i < 5; i++)
  {
    for (int j = 0; j<=i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

}