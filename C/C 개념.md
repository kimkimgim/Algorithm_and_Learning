## 주석
  1. /* ~ */
  2. //

## 함수 실행 규칙
1. 세미콜론(;)
  - 문장의 마침표
  - 세미콜론이 없으면 컴파일러는 8행까지를 한 문장으로 봄ㄹ

2. 한 줄에 한 문장씩 작성
3. 4칸 들여쓰기 기본

## 예시
```
# include <stdio.h>   // stdio : standard input output(표준 입출력)의 줄임말

int main(void)
{
    printf("be happy");  // 문자열 출력시는 항상 큰따옴표 사용

    return 0;
}
```

## main 함수 구조

  1. 머리 head = 함수 원형 function prototype
    - 함수 이름과 필요한 데이터 타입 등을 표시
  2. 몸통 body
    - 프로그램 종료 : return 0; 
  3. main함수는 2개일 수 없다 

    
    만약 2개를 실행시키고 싶다면 아래와 같은 구조로 이루어져야 함!
    # include <stdio.h>   // stdio : standard input output(표준 입출력)의 줄임말

    int function1(void)
    {
        printf("be happy\n");  // 문자열 출력시는 항상 큰따옴표 사용
        printf("My\t friend\n");
        printf("GooS\bh\n");
        printf("Cow\rW\a\n");
        return 0;
    }

    int function2(void)
    {
        printf("Hello World");
        return 0;
    }

    int main(void)
    {
        function1();
        function2();
        return 0;
    }
    

## 세부 함수 구조
1. include <stdio.h>
- stdio.h 파일의 내용을 프로그램 안에 복사한다.
- stdio.h = standard input oupt(표준입출력)
- 출력함수 prinf함수도 포함하여 표준입출력 함수에 들어있음

## 제어 문자
```
# include <stdio.h>   // stdio : standard input output(표준 입출력)의 줄임말

int main(void)
{
    printf("be happy\n");         // '\n' : 줄바꿈
    printf("My\t friend\n");      // '\t' : 탭 위치로 이동 
    printf("Goot\bd\tchance\n");  // '\b' : 한칸 이동 후 t 를 d로 바꾸기
    printf("Cow\rW\a\n");         // '\r' : 맨 앞으로 이동 C를 W로 바꾸기
                                  // '\a' (벨 소리):경고음을 발생시키려고 시도합니다. 만약 시스템이 경고음을 지원한다면, 이 부분에서 소리가 재생됩니다.
    return 0;
}


# 출력 
be happy
My       friend
Good    chance
Wow
```
<br>


1. \b(백스페이스, backspace) : 한 칸 왼쪽으로 이동 <br>
  ```
  printf ("Goot\bd \tchance\n");
  ``` 
Goot가 출력된 후에 제어 문자 1b에 의해 커서가 한 칸 왼쪽으로 이동합니다.<br>
그리고 d를 출력하면 t가 d로 바뀌어 600d이 출력된 상태가 됩니다. 이어서 제어 문자 It에 의해 다음 탭 위치인 9번으로 이동하고 chance가 출력되고 줄이 바뀝니다.
![alt text](image-1.png)


2. \r(캐리지 리턴, carriage return) : 맨 앞으로 이동
```
printf（"Cow/rmlaln"）；
```
Cow가 출력되고 제어 문자 Ir에 의해 커서가 첫 번째 칸으로 이동합니다. 그 자리에 W를 출력하면
C가 W로 바뀝니다


3. printf
- 문자열을 출력하는 함수
- 정수와 실수는 변환 필요
- 정수 %d , 실수 %lf
```
#include ‹stdio.h>
int main (void)
printf("%d\n", 10);       // %d 위치에 10 출력
printf("%lf\n", 3.4);     // %f 위치에 3.4를 소수점 이하 6자리까지 출력 
printf（ %.11fln"，3.45）； // 소수점 이하 첫째 자리까지 출력(둘째 자리에서 반올림)
printf("%.101f\n", 3.4);  // 소수점 이하 10자리까지 출력

printf("%d과 %의 합은 %d입니다. In, 10, 20, 10 + 20);
printf("%.11f-%.1Lf = %.11fln", 3.4, 1.2, 3.4 - 1.2);
실행결과
return 0;

```