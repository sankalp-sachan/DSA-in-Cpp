#include <iostream>
using namespace std;

int main(){
    int col;
    cin>>col;

    int row;
    cin>>row;

    int** arr = new int*[row];

    // Creating 2D array

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[row];
    }

    // Taking Input

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    // Output

        for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}