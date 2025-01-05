// 1차원 배열 데이터 처리

#include <iostream>
#include <string>
using namespace std;

#define SIZE 6
int main()
{
    int nData[SIZE] = {3, 6, 2, 5, 4, 1};
    int nEvenSum = 0, nOddSum = 0;
    int i;
    for (i=0; i<SIZE; i++)
    {
      nData[i] = nData[i] + 10;
      cout << "nData[" + to_string(i) + "] = " << nData[i] << endl;
    }
    for(i=0; i <SIZE; i++)
    {
      if(nData[i]%2) 
        nOddSum += nData[i];       //홀수 더하기
      else nEvenSum += nData[i];   // !(nData[i] % 2)
    }
    cout << "짝수 더하기 = " << nEvenSum << endl;
    cout << "홀수 더하기 = " << nOddSum << endl;
    return 0;

}