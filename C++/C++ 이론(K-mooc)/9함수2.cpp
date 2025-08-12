// 자료구조 : 데이터들을 어떻게 관리할 것인가?

// 함수
// Factorial
// 8! 


int main()
{

  int i = 4;

  int iValue = 1;
  for(int j = 0; j < i - 1; ++j)
  {

    iValue *= (j+2);

  }
  return 0;
}

// 함수를 쓰는 이유는 하나의 기능을 함수로 구현해서 재활용하기 위함!


// 그래서 위 코드를 함수로 만들기 

int Factorial(int iNum)
{

  int iValue = 1;
  for(int j = 0; j < iNum - 1; ++j)
  {

    iValue *= (j+2);

  } 
  return iValue;
}

int main()
{

  int iValue = Factorial(4);
  iValue = Factorial(10);

  return 0;
}



