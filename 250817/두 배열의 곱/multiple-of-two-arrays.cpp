#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mat[3][3];
    int mat2[3][3];

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            cin >> mat2[i][j];
        }
    }

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            mat[i][j] = mat[i][j] * mat2[i][j];
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}