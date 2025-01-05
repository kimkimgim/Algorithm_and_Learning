#include <iostream>
using namespace std;

int main()
{
    int nArray[5]={10, 20, 30, 40, 50};

    cout <<"nArray=";
    for(int i=0;i<5;i++) cout<<nArray[i]<<",";

    cout << "\nnArray[0]주소 :" << &nArray[0]<<endl;
    cout << "nArray 주소 :" << nArray <<endl<<endl;

    // 학생시절 추가
    cout <<"nArray[0]=" << nArray[0] << endl;
    cout << "nArray =" << *nArray<< endl <<endl;    // 역참조

    // 같은 출력
    cout <<"nArray[2] =" << nArray[2] <<endl;
    cout <<"*(nArray+2)=" << *(nArray+2)<<endl;
    return 0;
}

// 출력값 
// nArray=10,20,30,40,50,
// nArray[0]주소 :0x16d12b070
// nArray 주소 :0x16d12b070

// nArray[0]=10
// nArray =10

// nArray[2] =30
// *(nArray+2)=30