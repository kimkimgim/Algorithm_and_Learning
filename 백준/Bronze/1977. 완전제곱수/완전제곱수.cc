#include<iostream>
#include <cmath>

int main()
{    
    int m, n, i=0, cnt=0;
    std::cin >> m >> n;

    int max_wan = 0;
    int min_wan = n;
    int k = static_cast<int>(std::ceil(std::sqrt(m)));
    for (i=k; i*i<=n; i++)
    {
        if(i*i>=m)
        {    
            cnt += 1;
            max_wan += i*i;
            if (i*i < min_wan)
            {
                min_wan = i*i;
            }


        }
    }
    if(cnt==0)
    {
        std::cout << -1 << '\n';
    }
    else
    {
        std::cout << max_wan << '\n' << min_wan << '\n';
    }
    
    return 0;
}