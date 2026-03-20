#include <iostream>
#include <algorithm>

using namespace std;

string target;
string del;

int main()
{
  cin >> target >> del;

  string result;

  for(char c : target)
  {
    result += c;
    if(result.length() >= del.length())
    {
      if(result.substr(result.size() - del.size()) == del)
        {
          result.erase(result.length() - del.length());
        }
    }
  }

  if(result.size() == 0) cout << "FRULA" << '\n';
  else cout << result << '\n';

  return 0;
}