#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n,m,r;


int main()
{
  cin >> n >> m >> r;

  vector<vector<int>> arr(n, vector<int>(m));
  vector<vector<int>> newarr(n, vector<int>(m));

  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      cin >> arr[i][j];
    }
  }

  int layer = min(n,m) / 2;

  for(int k=0; k<layer; ++k)
  {
    // 고정된 경계값
    // 행 고정 열 감소
    int top = k;

    // 열 고정 행 감소
    int left = k;

    // 행 고정 열 증가
    int bottom = n-k-1;

    // 열 고정 행 감소
    int right = m-k-1;


    // 일자로 나열했을때 pop이 쉽기 때문에 앞쪽을 뺴야하기 때문에
    // 순서는 위 오른쪽 아래 왼쪽

    queue<int> temp;
    // 위( x 증, y 감소)
    for(int j=left; j<right; ++j)
    {
      temp.push(arr[top][j]);
    }

    // 오른쪽 (x 증가, y 고정)
    for(int i=top; i<bottom; ++i)
    {
      temp.push(arr[i][right]);
    }

    // 아래 (x 고정, y 감소)
    for(int j=right; j>left; --j)
    {
      temp.push(arr[bottom][j]);
    }

    // 왼쪽 (x 감소, y 고정)
    for(int i=bottom; i>top; --i)
    {
      temp.push(arr[i][left]);
    }

    for(int i=0; i<r; ++i)
    {
      int a = temp.front();
      temp.pop();
      temp.push(a);
    }


    // 다시 넣기
    for(int j=left; j<right; ++j)
    {
      newarr[top][j] = temp.front();
      temp.pop();
    }

    // 오른쪽 (x 증가, y 고정)
    for(int i=top; i<bottom; ++i)
    {
      newarr[i][right] = temp.front();
      temp.pop();
    }

    // 아래 (x 고정, y 감소)
    for(int j=right; j>left; --j)
    {
      newarr[bottom][j] = temp.front();
      temp.pop();
    }

    // 왼쪽 (x 감소, y 고정)
    for(int i=bottom; i>top; --i)
    {
      newarr[i][left] = temp.front();
      temp.pop();
    }

  }

  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      cout << newarr[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}