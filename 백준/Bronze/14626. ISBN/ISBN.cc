#include <iostream>

using namespace std;

int main()
{
  string isbn;
  cin >> isbn;

  for(int i=0; i<=9; ++i)
  {
    int sum = 0;

    for(int j=0; j<13; ++j)
    {
      int num;
      if(isbn[j] == '*')
      {
        num = i; 
      }
      else
      {
        num = isbn[j] - '0';
      }

      int weight = ((j+1) % 2 == 0)? 3 : 1 ;
      sum += num * weight;

    }

    if (sum % 10 == 0)
    {
      cout << i;
      break;
    }
  }

  return 0;
}