#include <stdio.h>

//함수 선언
void p(int num);

int main(void){
  // function
  // 계산기

  // int num = 2;
  // printf("num 은 %d 입니다.\n", num);

  // // 2+3 은?
  // num = num+3;
  // printf("num은 %d 입니다\n", num);

  // // 5-1은?
  // num -= 1;
  // printf("num은 %d 입니다\n", num);
  // // 4*3은?
  // num *= 3;
  // printf("num은 %d 입니다\n", num);
  // // 12/6은?
  // num /= 6;
  // printf("num은 %d 입니다\n", num);

 // 위의 긴 내용을 줄이는 방법 : 함수

 int num = 2;
 // p라는 함수를 호출하고 num라는 값을 던지겠다.
 p(num);
 num = num+3;
 p(num);
 num -= 1;
 p(num);
 num *= 3;
 p(num);
 num /= 6;
 p(num);

 return 0;
}

// 정의 
// 중괄호 위에서 선언 중괄호 아래에서 정의
// p 는 이름 
// (int num) 은 전달값
void p(int num)
{
  printf("num은 %d 입니다\n", num);
}


// 함수 정의
// 전달값 : 36
// 함수 : ㅁ + 4
// 반환형 : ? 

//  int 함수 이름(num)
// (앞에는 반환하고 싶은 인자의 타입을 적으면 됨) -> 정수 int, 실수 float double, 문자 char, 아무것도 없으면 void(void일때는 return 필요없음) 
// {
//    return num + 4;
// }


// 함수 선언!시 주의
// void 함수이름 ( int num1, int num2, char c, float f  다 가능 -> but main함수 위쪽에 선언한 부분가 동일해야함!)
// {
// }
// 예시
// 선언 : void p (int num)
// 함수 : void p (int num)
// => 둘이 동일해야함!

