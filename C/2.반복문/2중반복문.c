// 2중 반복문
#include <stdio.h>

// int main(void){


//   for (int i=1; i <=3; i++){
//     printf("첫 번째 반복문 : %d\n", i);

//     for(int j=1; j<=5; j++){
//       printf("    두 번째 반복문 : %d\n", j);
//     }
//   }
// }


// 구구단 만들기
// 2 x 1 = 2
// 2 x 2 = 4
// 2 x 3 = 6
// 2 x 4 = 8
// ...
// 9 X 9 = 81

int main(void){
  for(int i=2; i<=9; i++){
    printf("%d단 계산\n", i);
    for(int j=1; j<=9; j++){
      printf(" %d x %d = %d\n", i, j, i*j);
    }
  }
}