#include <iostream>
using namespace std;

bool linearSearch2D(int matrix[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int matrix[4][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int rows = 4;
    int cols = 3;

    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>matrix[i][j];
    //     }
    // }
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}