// while() 반복문
#include <iostream>
using namespace std;

int main(){

    int nNumber = 0;  // 초기값 

    while (nNumber < 6)
    {
      cout << "변수 값=" << nNumber << endl;
      nNumber++;
    }
    cout << "Good Bye!!\n";
    
    return 0;
}

// 출력 
// 변수 값=0
// 변수 값=1
// 변수 값=2
// 변수 값=3
// 변수 값=4
// 변수 값=5
// Good Bye!!