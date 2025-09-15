#include <iostream>
#include <vector>

using namespace std;

// 좌표가 도움이 안됨 왜? 층단이로 돌려야하기 때문에
// int dir()
// {           // 상 우 하 좌
//   int dx[4] = {1, 0, -1, 0};
//   int dy[4] = {0, 1, 0, -1};
  
//   return ;
// }

int main()
{
  
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, r;
  cin >> n >> m >> r;
  vector<vector<int>> arr(n, vector<int>(m));

  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      cin >> arr[i][j];
    }
  }

  // x 값에 -1 을해서 배열 돌리기
  // 단 끝에 다다랐을 경우 x값 증가혹은 감소 y값 증가 혹은감소


  // 어디가 안되는거야? 지금 처번째 돌리고 그다음돌릴때 모서리 부분 범위를 어떻게 줘야하는거지? 
  // 두번째줄이다라는걸 어떻게 x = 2 이면 되는거 잖아? 오? 
  // 2일경우 양끝이 아니면 되고
  // 3일 경우 끝> 아 근데 이건 몇개냐에 따라 다른데
  int layers = min(n, m) / 2;


  // 4층일경우 2층 까지 
  for(int l=0; l<layers; ++l)
  {
    vector<int> v;

    // 위 (좌→우)(꼭지점 양쪽 포함)
    for (int j = l; j < m - l; j++) v.push_back(arr[l][j]);
    // 오른쪽 (위→아래)
    for (int i = l + 1; i < n - l - 1; i++) v.push_back(arr[i][m - l - 1]);
    // 아래 (우→좌)(꼭지점 양쪽 포함)
    for (int j = m - l - 1; j >= l; j--) v.push_back(arr[n - l - 1][j]);
    // 왼쪽 (아래→위)
    for (int i = n - l - 2; i > l; i--) v.push_back(arr[i][l]);


    //회전
    int len = v.size();
    int rot = r % len;

    int idx = 0;

    
    // 위
    for (int j = l; j < m - l; j++)
        arr[l][j] = v[(idx++ + rot) % len];
    // 오른쪽
    for (int i = l + 1; i < n - l - 1; i++)
        arr[i][m - l - 1] = v[(idx++ + rot) % len];
    // 아래
    for (int j = m - l - 1; j >= l; j--)
        arr[n - l - 1][j] = v[(idx++ + rot) % len];
    // 왼쪽
    for (int i = n - l - 2; i > l; i--)
        arr[i][l] = v[(idx++ + rot) % len];

  }
  
  for(int i =0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}