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