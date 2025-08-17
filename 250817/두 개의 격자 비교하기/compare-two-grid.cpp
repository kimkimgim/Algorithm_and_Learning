#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int mat[n][m];
    int mat2[n][m];
    for(int i=0; i <n; ++i)
    {
        for(int j=0; j <m; ++j)
        {
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j <m; ++j)
        {
            cin >> mat2[i][j];
        }
    }

    int res[n][m];
    for(int i=0; i <n; ++i)
    {
        for(int j=0; j <m; ++j)
        {
            if(mat[i][j] == mat2[i][j]) 
            {
                res[i][j] = 0;
            }
            else res[i][j] = 1;

            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}