#include <iostream>
#include <vector>
using namespace std;

// 버블 정렬(조기종료)
void bubbleSort(vector<int> &v)
{
  int ns = v.size();
  bool swapped = false;

  for (int i=0; i < ns-1; ++i)
  {
    for(int j=0; j < ns-1-i; ++j)   
    {
      if (v[j] > v[j+1])
      {
        swap(v[j], v[j+1]);
        swapped = true;
      }
    }
    if(!swapped)
    {
      break;
    }
  }

}



int main()
{

  int N;
  cin >> N;
  
  vector<int> v(N);     // 크기 고정
  for(int i=0; i < N; ++i)
  {
    // 메모리 재할당이 이루어지기 때문에 비효율적
    // int n 
    // cin >> n;
    // insertSort.push_back(n)

    cin >> v[i];    // 인덱스를 이용해 직접 저장
  }

  // selectionSort(v);
  bubbleSort(v);
  
  for(int n : v) cout << n << '\n';
  


  return 0;
}