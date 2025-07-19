
int global = 0;  // 전역 변수
int Add(int left, int right)
{
  return left + right;        // 아래에서 Add 가 호출되면서 결국 괄호안에 left, right 도 선언된거기 때문에 지역변수가 됨
}

int main()
{
  // 변수
  // 1. 지역변수
  //   : 함수 안에 선언된 

  // 2. 전역변수
  //    : 함수 밖에 선언한 것 

  // 3. 정적변수
  // 4. 외부변수

  // 1번과 2번을 알기 위해서는 함수를 정확히 알아야함
  // 함수
  int data;
  data = Add(10, 20);     // 위에 만든 Add 함수 호출

  // 지역변수
  // 괄호를 통해 지역안에 또 지역을 만들 수 있음
  int iName = 0;
  // 괄호 안에 선언된 변수(함수, 지역)
  {
    // 변수명 규칙
    int iName = 100;               // 지역 안에서 iName은 iName에서의 iName이기 때문에 변수명이 동일해도 괜찮음

    iName;                         // 여기서의 iName은 괄호 안에 있는 바로 위의 iName(iName의 iName)
    {
        // 이런식으로 지역    
    }
  }
    // int iName = 200;            // 하지만 괄호 밖에 있는 iName 은 문제가 됨(동일한영역)⭐️⭐️⭐️

  iName;                           // 밖에서 호출하는건 바로 위에 있는 iName 


  // ⭐️⭐️⭐️ 모듈화가 필수 : 잘게 잘게 쪼개서 기능을 분리

  return 0;
}