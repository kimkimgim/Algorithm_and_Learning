#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n];
    for(int i=0; i<n; ++i)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int cnt = 0;
    // 투포인터
    int start = 0;
    int end = 0;
    
    while(true)
    {
        if(sum >= m)
        {
            sum -= arr[start];
            start++;
        }
        // 기저조건
        else if(end == n)
        {
            break;
        }
        else
        {
            sum += arr[end];
            end++;
        }

        if(sum == m) ++cnt;
    }
    cout << cnt <<'\n';
}