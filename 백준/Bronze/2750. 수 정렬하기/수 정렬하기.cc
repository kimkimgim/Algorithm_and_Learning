#include <iostream>
#include <vector>
using namespace std;

// 버블 정렬
// 인접한 두개를 비교
void bubbleSort(vector<int> &v)
{
  int ns = v.size();
  for (int i=0; i < ns-1; ++i)
  {
    for(int j=0; j < ns-1-i; ++j)   // 버블 정렬은 1번이 끝나면 마지막 수가 무조건 정렬됨 
    {
      if (v[j] > v[j+1])
      {
        swap(v[j], v[j+1]);
      }
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