#include <iostream>
using namespace std;

int main()
{

    const char *pstrData[4] = {"ASAN", "CHEONAN", "SEOUL", "DAEJEON"};

    cout << "0행 출력=" <<pstrData[0]<<","<<pstrData<<endl;   // pstrData : 포인터 배열의 시작 수로를 가리킴(여기서는 ASAN)
    cout << "2행 출력=" <<pstrData[2]<<","<<*(pstrData + 2) << endl << endl; // pstrData +2 = SEOUL

    for(int k=0; k<4; k++)
    {
      cout << *(pstrData+k) << "=";
      cout << pstrData[k] << endl;
    }
    return 0;
}

// 문자열이 여러개 있을 때 포인트를 쓰면 쉽게 1차원 배열로 쓸 수 있다!
// ???

