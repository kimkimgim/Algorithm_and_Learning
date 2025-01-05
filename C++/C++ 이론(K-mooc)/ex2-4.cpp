// string class를 이용한 문자열 처리
#include <iostream>
#include <string>
using namespace std;

int main(){

string strData1 = "Korea"; // 객체 생성, Class에서 설명 
cout << "메모리크기=" << strData1.size() << " , "<< strData1 << endl;

string strData2("대한민국");
cout << "메모리크기=" << strData2.length() << " , "<< strData2 << endl;

strData1.replace(1, 3, "Car"); // 1~3번째를 Car로 대체 
cout << "메모리크기=" << strData1.size() << " , "<< strData1 << endl;
cout << "1,3번 위치 문자=" << strData1.at(1) << " , "<< strData1[3];
                           // 1번위치 

return 0;
}

// 출력값
// 메모리크기=5 , Korea
// 메모리크기=12 , 대한민국
// 메모리크기=5 , KCara
// 1,3번 위치 문자=C , r% 