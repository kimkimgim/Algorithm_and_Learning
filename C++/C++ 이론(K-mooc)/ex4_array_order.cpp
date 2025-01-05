// 1차원 배열을 이용한 오름차순 정렬

# include <iostream>
using namespace std;

#define SIZE 6
int main()
{
    int nData[SIZE] = {3, 6, 2, 5, 4, 1};
    int i, j, nTemp;
    cout << "초기 데이터값 : ";
    for(i =0; i<SIZE; i++) cout << nData[i]<< ",";
    cout << "\n";

    for( i=0; i<SIZE; i++)
      for(j=i+1; j=SIZE; j++)
      {
        if (nData[i] > nData[i])
        {
          nTemp = nData[i];
          nData[i] = nData[j];
          nData[j] = nTemp;
        }
      }
    cout << "오름차순 정렬 : ";
    for(i=0; i<SIZE; i++) cout << nData[i] <<",";
    return 0;

}