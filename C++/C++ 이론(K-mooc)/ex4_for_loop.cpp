// 배열과 for 반복문
#include <iostream>
using namespace std;

int main()
{
    int nData[] = { 3, 6, 2, 5};

    for(int i=0; i<4; i++) cout << nData[i];
    cout << "\n" << "------------\n";

    // 순차 복사형: 배열 요소 데이터가 차례대로 복사(자료형 변수명:배열명)
    for(int nValue : nData) cout << nValue;
    cout << "\n" << "------------\n";

    for(auto nValue : nData) cout << nValue;
    cout << "\n" << "------------\n";

    // 순차 참조형 : 배열 요소 데이터가 차례대로 참조자를 이용
    for(auto& nValue : nData) cout << nValue;
    return 0;
}

// 출력
// 3625
// ------------
// 3625
// ------------
// 3625
// ------------
// 3625%                                                                                 