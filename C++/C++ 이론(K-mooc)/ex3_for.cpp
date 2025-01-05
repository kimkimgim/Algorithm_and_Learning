#include <iostream>
#include <string>
using namespace std;

int main(){

    int n, nSum = 0;
        // 초기값 // 조건식 // 증감분
        // n은 1부터 5까지 
    for(n=1; n<6; n++)
    {
      nSum += n;
      cout << "1부터 " + to_string(n) + "까지 합은 = " << nSum << endl;
    }
    return 0;
}
//출력값
// 1부터 1까지 합은 = 1
// 1부터 2까지 합은 = 3
// 1부터 3까지 합은 = 6
// 1부터 4까지 합은 = 10
// 1부터 5까지 합은 = 15


// to_string 
// - c++ 표준라이브러리 함수
// - 숫자 타입(int, float, double 등)을 문자열(string)로 변환해주는 함수

// while(1) 과 같은 무한 반복문
// == for(;;){}