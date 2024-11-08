#include <stdio.h>

int main(void){

  char plates[254];
  // plates 를 배열로 인식, 배열자체가 주소이므로 &필요하지 않음!
  scanf("%s", plates);
  
  // 시작값을 10으로 시작
  int total = 10;   
  int length = strlen(plates);

  // 처음값은 주었으니 2번째부터 시작
  for (int i=1; i<length; i++)
  {
    if (plates[i]==plates[i-1])
    {
      total += 5;
    }
      else
      {
        total += 10;
      }
  }
  printf("%d\n", total);
}