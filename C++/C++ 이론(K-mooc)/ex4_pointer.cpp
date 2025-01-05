#include <iostream>
using namespace std;

int main()
{
    int nData = 100;
    cout << "address= " << &nData << ", Data=" << nData << endl;

    int *pData1 = &nData;
    cout << "address= " << pData1 << ", Data=" << *pData1 << endl;

    int *pData2;
    pData2 = &nData;

    *pData2 = 200;
    cout << "address= "<< pData2 << ", Data=" << *pData2 << endl;

    // new데이터: 컴퓨터가 알아서 주소 배정
    int *pData3 = new int;
    *pData3 = 300;
    cout << "address= " << pData3 << ", Data=" << *pData3 << endl;

    int *pData4 = new int(400);
    cout << "address= " << pData4<< ", Data= " << *pData4 << endl;
    return 0; 
}

// 출력값 
// address= 0x16d33b098, Data=100
// address= 0x16d33b098, Data=0x16d33b098
// address= 0x16d33b098, Data=0x16d33b098
// address= 0x12a7040f0, Data=0x12a7040f0
// address= 0x12a7041a0, Data= 400

// 중요!!** pointer로 선언된 변수는 반드시 프로그램내에서 초기화를 해야함!!