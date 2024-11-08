# include <stdio.h>

int main(void)
{
  //문자(한글자), 문자열(한 글자 이상의 여러 글자)
  char c = 'A';
  printf("%c\n", c);

  char str[256];
  // 문자열을 저장하기 위한 변수를 256개 쭉 만들겠다 (배열)
  scanf("%s", str);
  // scanf("%s", str, sizeof(str)); -> vs code는 오류발생
  // 문자열 입력시에는 & 필요 없음
  printf("%s\n", str);
  return 0;
}


// %c
// 문자(character)을 출력하기 위한 서식 지정자

// 서식 지정자(format spectifier)
// %d : 정수(int) 출력
// %f : 부동 소수점(float) 출력
// %s : 문자열(string) 출력
// %p : 포인터(pointer) 출력

// sizeof(크기)
// 문자형의 경우 값의 크기를 지정해줘야 한다! 
// 위의 경울 256개 크기를 만들었기에 그 이상으로 가면 오류가 발생할 수 있음