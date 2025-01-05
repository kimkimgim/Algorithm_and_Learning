#include <iostream>
using namespace std;

int main()
{   
  // 배열 선언
   int nArray[4][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}, {100, 110, 120}};
   // { 10,20,30,40,50,60,70,80,90,100,110,120}; 와 동엘

   cout << "nArray[0][0]주소:" <<&nArray[0][0] << endl;
   cout << "nArray[0]주소   :" << nArray[0] << endl;
   cout << "nArray 주소     :" << nArray << endl << endl;

   cout << "nArray[2][0]주소:" << &nArray[2][0] << endl;
   cout << "nArray[2]주소   :" << nArray[2]<< endl << endl;

   cout << "nArray[3][1] =" << nArray[3][1] <<endl;
   cout << "*(nArray[3]+1) = " << *(nArray[3]+1) <<endl;

   return 0;
}

// 출력값
// nArray[0][0]주소:0x16d797048
// nArray[0]주소   :0x16d797048
// nArray 주소     :0x16d797048

// nArray[2][0]주소:0x16d797060
// nArray[2]주소   :0x16d797060

// nArray[3][1] =110
// *(nArray[3]+1) = 110

// 즉 배열과 포인터는 방대한 데이터를 다루기 때문에 같은 것이다. 용도가 같다!