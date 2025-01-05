// if else 제어문
# include <iostream>
using namespace std;

int main(){

  int nA, nB, nC;         // 메모리가 각각 32비트 배정
  cout << "값을 입력하세요 : ";
  cin >> nA;
  cout << "입력값 = " << nA << endl;
  if (nA > 0){
    nB = nA + 10;
    cout << nA << " +10 = " << nB << endl;
  }
  else{
    nC = nA - 10;
    cout << nA << " - 10 = " << nC << endl;
  }
  return 0;
}
