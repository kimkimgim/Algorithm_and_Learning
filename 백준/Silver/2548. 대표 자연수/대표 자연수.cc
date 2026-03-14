#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> cal;
int answer;
int rep = -1;

void findRep(int num, int n)
{
    int diff = 0;
    for(int i=0; i<n; ++i)
        {
            diff += abs(num - cal[i]);
            if(rep != -1 && rep < diff)
            {
                return;
            }
        }
    if(rep == -1 || rep > diff)
    {
        rep = diff;
        answer = num;
    }
    else if(rep == diff && answer > num)
    {
        answer = num;
    }
}


int main() {
    
    int n;
    cin >> n;
    cal.resize(n);

    for(int i=0; i<n; i++)
        {
            cin >> cal[i];
        }

    for(int num : cal)
        {
            findRep(num , n);
        }
    
    cout << answer << '\n';
    
    
    return 0;
}