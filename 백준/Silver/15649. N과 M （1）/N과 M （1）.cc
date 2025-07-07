#include <iostream>
#define MAX 9                        // 매크로 정의 MAX 라는 이름을 9로 치환하겠다.

  int N, M;                          // M 이 길이
  int arr[MAX] = {0,};               // 명시적 초기화 습관 들이기
  bool visited[MAX] = {0, };         // {} 빈배열롤 만들어도 되지만 옛날 사람들은 첫 값은 무조건 0 이라는 명확한 지정을 주고 싶어서! 명시적으로 적는걸 선호함!

void dfs(int idx)
{
  if (idx == M)
  {
    for (int i = 0; i < M; i++)      // for문 뒤에 실행문이 1줄일 경우 생략 가능!
    {
      std::cout << arr[i] << ' ';
    }
    std::cout <<'\n';
    return;
  }

  for (int i = 1; i <= N; i++)
  {
    if(visited[i] == false){
      visited[i] = true;
      arr[idx] = i;
      dfs(idx+1);
      visited[i] = false;
    }
  }
}

int main()
{

  std::cin >> N >> M;
  dfs(0);
  return 0;           // C++ 11 부터는 있어도 되고 없어도 된다는데..? 자동 추가 되기 때문에!
}

