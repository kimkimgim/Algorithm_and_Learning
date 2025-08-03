#include <iostream>
#include <vector>
using namespace std;

// 선택정렬
// 제일 큰 값을 기준으로 정렬되지 않은 값에서 가져와서 
void selectionSort(vector<int> &v)     // 참조 : 복사하지 않고 원본에 접근
{
  // 최솟값 찾기
  int ns = v.size();                   // 이렇게 해야 매번 계산하지 않음
  for(int i=0; i < ns-1; ++i)          // 마지막 원소는 자동 정렬
  {
    int min_idx = i;
    for(int j= i+1; j < ns; ++j)
    {
      if(v[j] < v[min_idx])
      {
        min_idx = j;
      }
    }

    if(min_idx != i)
    {
      swap(v[i], v[min_idx]);
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

  selectionSort(v);
  
  for(int n : v) cout << n << '\n';
  


  return 0;
}