#include <iostream> 
using namespace std;

int main (){

const char* pstrData1 = "대한민국"; // 포인터 변수로 배열 선언
cout << "메모리크기=" << strlen(pstrData1) <<", "<< pstrData1 << endl;

const char* pstrData2 = "Korea";
cout << "메모리크기=" << strlen(pstrData2) <<", "<< pstrData2 << endl;
cout << "2번째 문자=" << pstrData2[2] << endl;

return 0;
}

// 출력결과
// 메모리크기=12, 대한민국
// 메모리크기=5, Korea
// 2번째 문자=r