# include <stdio.h>

int main(void){
// break / continue

// 예시 1
// 1번부터 30번까지 있는 반에서 1번부터 5번까지 조별 발표를 합니다.
// for (int i=1; i <=30; i++)
// {
//   if (i >= 6)
//   {
//     printf("나머지 학생은 집에 가세요\n");
//     break;
//     // break : 조건에 부합하면 for문 탈출!
//   }
//   printf("%d 번 학생은 조별발표를 준비하세요\n", i);
// }

// 예시 2
// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
for(int i =1; i<=30; i++)
{
  if (i>=6 && i <=10)
  {
    if(i==7){
      printf("%d 번 학생은 결석입니다.\n", i);
      continue;
      // continue : 조건에 부합할 때 그 이후의 문장은 실행하지 않고 바로 다음으로 넘어감!
    }
    printf("%d 번 학생은 조별 발표를 하세요\n", i);
  }
}

return 0;
}