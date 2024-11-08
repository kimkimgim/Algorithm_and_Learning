#include <stdio.h>

int main(void)
{
  // 입력하려는 공간을 최대값으로 만들어주면
  char name[256];
  printf("이름을 입력하세요 : ");
  // scanf("%s", name, sizeof(name)); 이렇게 입력하면 오류 발생 scanf가 sizeof(name) 에 대해서 무시하고 있다는 경고메세지가 나옴
  scanf("%s", name, sizeof(name));
  printf("%s\n", name);

  return 0;
}