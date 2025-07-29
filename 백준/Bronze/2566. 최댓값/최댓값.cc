#include<iostream>
#include<vector>

int main ()
{
  int maxN = -1;
  int maxi = 0;
  int maxj = 0;
  std::vector<std::vector<int>> array(9, std::vector<int>(9));

  for(int i=0; i<9; ++i)
  {
    for(int j=0; j<9; ++j)
    {
      std::cin >> array[i][j];

      if (array[i][j] > maxN)
      {
        maxN = array[i][j];
        maxi = i;
        maxj = j;
      }
    }
  }
  
  std::cout << maxN << '\n';
  std::cout << (maxi+1) << " " << (maxj+1) << '\n';
  return 0;
}