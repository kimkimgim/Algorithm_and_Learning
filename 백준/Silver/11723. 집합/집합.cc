#include <iostream>
#include <string>
int main()
{
  // 성능 최적화  (C와 prinf 와 같은 입출력을 같이 받는, 동기화를 제한함)
  // 코딩테스트에서 필히 넣기!
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  // 1. 입력
  int M;
  std::cin >> M;

  // 2. 연산
  int S = 0;
  for (int i=0; i < M; i++)
  {
    std::string com;
    int x;
    std::cin >> com;
    if (com == "add")
    {
      std::cin >> x;
      S = S | (1 << (x-1)); // or 연산자 무조건 1을 반환
    }
    else if (com == "remove")
    {
      std::cin >> x;
      S = S & ~(1 << (x-1)); // and 연산자 둘다 1일때만 1반환
    }
    else if (com == "check")
    {
      std::cin >> x;
      bool is_x = S & (1 << (x-1));
      if (is_x)
      {
        std::cout << 1 << '\n'; // endl 은 출력을 느리게 만듬 단순 줄바꿈만하는게 아니라 데이터를 강제로 화면, 파일로 보냄(플러시)
      }
      else
      {
        std::cout << 0 << '\n';
      }
    }
    else if (com == "toggle")
    {
      std::cin >> x;
      S ^= (1 << (x-1)); // 반전연산자
    }
    else if (com == "all")
    {
      S = (1 << 20)-1; // 이게 왜지?
    }
    else if (com == "empty")
    {
      S = 0;
    }
  }

  return 0;
}


// 비트마스킹
// 이진수 비트들을 활용하여 데이터를 효율적으로 저장하고 조작하는 기법
// 메모리 절약, 속도 측면에서 장점 있음