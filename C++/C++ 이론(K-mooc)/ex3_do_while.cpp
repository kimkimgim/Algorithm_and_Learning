// do-while() 반복문
#include <iostream>
using namespace std;

int main(){
    
    int nNumber = 10;

    do{
      cout << "변수 값=" << nNumber << endl;
      nNumber++;
    }
    while(nNumber < 6);
    cout << "Good Bye!!\n";
  
}

// do-while 문은 return 0 이 없어도 되는 건가?
// 프로그래머가 직접 작성하지 않아도 컴파일러가 자동으로 return 0을 추가해 줌
// 그러나 프로그래밍 습관을 위해서는 명시적으로 return 0 을 작성해주는 것이 좋음!


// 출력값 int nNumber = 2; 경우
// 변수 값=2
// 변수 값=3
// 변수 값=4
// 변수 값=5
// Good Bye!!

// do-while 과 while 차이점
// do-while : 먼저 실행하고 조건을 검색!
// while : 조건을 검색하고 만족하면 무한 반복하는 것!

