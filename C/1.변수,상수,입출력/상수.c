# include <stdio.h>
int main(void)
{
  
  const int YEAR = 2000;
  printf("태어난 년도 : %d\n", YEAR);
  // YEAR = 20001 => YEAR가 상수이기에 바꾸려고하면 바꿀 수 없다고 빨간줄이 뜸!
  return 0;
}


// 상수
// 변하지 않는 수이기에 한 번 정하면 끝!
// 대문자로 정의