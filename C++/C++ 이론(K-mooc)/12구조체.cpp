// 구조체(structure)는 서로 관련이 있는 데이터를 하나의 단위로 묶은 데이터 형

// C 예제
#include <stdio.h>

// ⭐️⭐️⭐️ 구조체 선언
// c 에서는 구조체를 선언하고 재정의를 해주지 않으면 문제가 생김
// C++ 에서는 개선되어 재정의 해주지 않아도 됨
struct NewStruct
{
  int   a;        
  short s;  
};
// 위와 같이 만들고 main 에서 자료형을 선언하려면 무조건 struct NewStruct a; 라고 선언해야함 
// 단순히 NewStruct a; 로 선언하는 것은 컴파일 에러 발생

// 그래서
typedef struct NewStruct
{
  int   a;        
  short s;  
}NEWS;
// 구조체 NewStruct 을 NEWS 로 재정의 하겠다 라는 식이 필요함!! 
// 하지만 C++ 은 굳이 재정의 하지 않고 NewStruct 바로 호출해도 에러나지 않음!!

// 사용자 정의 자료형 
typedef struct _tagMyST      // c에서는 typedef을 재정의 해주지 않으면 
{                              
  int   a;        // 변수를 선언한 것은 아니다! 실체가 있는 건 아니고 이렇게 구성되어있다라는 뜻
  float f;       //  단지 구조체 크기를 지정한 것 
}MYST;

typedef struct _tagBig
{
  MYST k;
  int  i;
  char c;

}BIG;

typedef int INT;             // type define : 재정의하겠다. int -> INT 로 다시 정의하겠다.
// 이후의 코드에서 INT로 입력해도 int로 받아들인다.! 재정의 했으니까!

int main ()
{

  //  배열 
  int arr[10] = { 1, 2, 3, 4 };     // 10칸을 다 채우지 않아도 알아서 나머지 값은 0 이 들어감
  
  // 구조체 
  MYST t = {100, 3.14f};          // 배열과 비슷하게 진행됨


  MYST t;
  t.a = 10;       // 각 구조체 안의 크기에 접근하고 싶으면 .(지정해놓은 변수명)으로 접근하면 된다.
  t.f = 10.2312f;

  int iSize = sizeof(MYST);   // MYST 안에 int 와 float 메모리가 묶여서 새로운 바이트가 나오기에 크기는 8바이트

  INT a;
  return 0;
}