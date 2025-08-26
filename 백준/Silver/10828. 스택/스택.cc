#include <iostream>
#include <string>
#include <vector>

using namespace std;

void v_push(vector<int> &arr, int num)
{
    arr.push_back(num);
}
void v_pop(vector<int> &arr)
{
    if(!arr.empty())  
    {
       int a = arr.back();
       arr.pop_back();
       cout << a << '\n';  
    }
    else cout << -1 << '\n';
}

void v_size(vector<int> &arr)
{
    cout << arr.size() << '\n';
}

void v_empty(vector<int> &arr)
{
    if(!arr.empty())
    {
        cout << 0 << '\n';
    }
    else cout << 1 << '\n';
    
}

void v_top(vector<int> &arr)
{
    if(!arr.empty())
    {
        cout << arr.back() << '\n';
    }
    else cout << -1 << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> arr;   // arr(n) 으로 하면 배열이 동적으로 되어야하는데 n개가 0으로 채워지면서 고정이 되어버림
    
    for (int i =0; i < n; ++i)
    {
        string req;
        int num;
        
        cin >> req;
        
        if(req == "push")
        {
            cin >> num;
            v_push(arr, num);
        }
        else if(req == "pop")
        {
            v_pop(arr);
        }
        else if(req == "size")
        {
            v_size(arr);
        }
        else if (req == "empty")
        {
            v_empty(arr);
        }
        else if (req == "top")
        {
            v_top(arr);
        }
    }
}