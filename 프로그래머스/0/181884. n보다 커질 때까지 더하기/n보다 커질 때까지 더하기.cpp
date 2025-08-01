#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> numbers, int n)
{
  int hab = 0;

  for(int i=0; i < numbers.size(); ++i)
  {
    hab += numbers[i];

    if (hab > n)
    {
      return hab;
    }
  }

  int answer = hab;
  return answer;
}