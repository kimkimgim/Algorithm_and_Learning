//3-8: 동적 메모리 할당과 해제

# include <iostream>
# include <string>
using namespace std;

int main()
{
  int *pA =new int;                        // (1)정수형 메모리 할당(32비트)
  *pA = 100;                               // (2)역참조 데이터 100을 넣음

  auto *pB = new auto(200);                // 1,2번을 한문장으로 쓸 수 있음

  cout << "pA Value:" << *pA << endl;
  cout << "pB Value:" << *pB << endl;
  delete pA, pB;                            // 메모리에서 제거

  int *pData = new int[5];                  // 5개 할당
  if(!pData) return 0;                     // 할당이 잘 되었는지 확인, 주소값이 없으면 0 반환, 프로그램 종료
  for(int i=0; i<5; i++)pData[i]=i*10;

  cout << "pData[2]:" << pData[2] << endl;
  delete[]pData;                        // 동적메모리 해제

  // int*pC = new int[4]{10,20,30,40}; // C++11 이전 버전의 컴파일러를 사용하고 있기에 이 문법은 오류남
  int *pC = new int[4];                // 정수형 배열 동적 메모리 할당
  pC[0] = 10;
  pC[1] = 20;
  pC[2] = 30;
  pC[3] = 40;
  cout << pC[0] + pC[1] << endl;
  delete[]pC;
  string*pStr=new string[2];           // 동적메모리 할당
  if(!pStr)return 0;                   
 
  pStr[0]="Korea is";
  pStr[1]="very Good";

  cout << pStr[0]+pStr[1];
  return 0;
}