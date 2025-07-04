#include<iostream>
#include<string>
// using namespace std; -> 이건 간단하게 쓰긴 좋지만 다른 라이브러리 이름과 충돌 위험이 있기에 주의

int main()
{
  std :: string S;
  std :: cin >> S;

  int zero = 0;
  int one = 0;

  for (int i=0; i < S.size(); i++)
  {
    if (S[i] == '0')
    {
      zero++;
    }
    else 
    {
      one++;
    }
  }

  zero /= 2;
  one /= 2;

  // string(n, c) -> c를 n개 반복해서 만든 문자열
  std :: cout << std :: string(zero, '0') + std :: string(one, '1');

  return 0;
}