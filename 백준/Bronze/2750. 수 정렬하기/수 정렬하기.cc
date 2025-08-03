#include <iostream>
#include <vector>
using namespace std;

// 삽입정렬
void insertSort(vector<int> &v)
{
  int ns = v.size();

  for (int i=0; i < ns; ++i)  // 모든 수를 검사해야하기 때문에 n-1은 아님
  {
    int key = v[i];
    int j = i - 1;

    while(j >=0 && v[j] > key )
    {
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = key;
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


  insertSort(v);
  
  for(int n : v) cout << n << '\n';
  


  return 0;
}