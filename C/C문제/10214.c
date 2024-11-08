#include <stdio.h>

int main(void)
{ 
  int T; // testcatse
  int y; // 연대 점수
  int k; // 고대 점수
  scanf("%d", &T);

  for (int i =0; i< T; i++){

    int total_y = 0;
    int total_k = 0;

    for (int j = 0; j < 9; j++)
    {
      // 반복문 안에서 받아야함! 안그러면 오류!
      scanf("%d %d", &y, &k);
      total_y += y;
      total_k += k;
    }

    if (total_y > total_k)
    {
      printf("Yonsei\n");
    }
    else if(total_k > total_y)
    {
      printf("Korea\n");
    }
    else
    {
      printf("Draw\n");  //'\n' 이거 꼭 넣어주기!!
    }
  }

  return 0;
}