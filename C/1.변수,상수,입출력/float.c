#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = -1;

    if(0<num1 && num1<=100 && 0<num2 && num2 <=100){
        float ans = (float)num1/num2;
        answer = ans*1000;
    }
        return answer;
}

// int num을 선언했기에 소수점이 나오면 소수점 이하가 다 소실됨
// 그래서 (float)을 해줘야함
// num들이 int 로 선언되어있기에 나눗셈 하면서 소수점 이하를 다 버리고 반환하기 때문에!


//<가능한 다른 풀이>
// int solution(int num1, int num2) {
//     int answer = 0;
//     answer = 1000*num1 / num2;
//     return answer;
// }
