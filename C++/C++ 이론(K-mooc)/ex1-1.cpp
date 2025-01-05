// ex 2-1 : 데이터 화면 처리
#include <iostream> 
#include <cstdio> // printf()를 사용하기 위함
using namespace std;

int main() {
int nA=10, nB(20); // C++에서 또 다른 대입방법 ()
auto nC(30);
printf("데이터1 = %d, 데이터2 =%d, 데이터3 = %d \n", nA, nB, nC);

cout << "printf, cout 비교 \n";

nA=nA+100;
nB=nB+100;
nC=nC+100;
cout<<"데이터1 = "<< nA << ", 데이터2 ="<< nB <<", 데이터3 = "<<nC<<endl;
return 0; }